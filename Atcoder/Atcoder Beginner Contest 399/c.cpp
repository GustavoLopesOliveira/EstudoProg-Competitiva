#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> parent;  // Armazena o "pai" de cada ponto

    DSU(int n) {  // Inicializa todos os pontos como pais de si mesmos
        parent.resize(n + 1);
        for (int i = 1; i <= n; i++) parent[i] = i;
    }

    int find(int u) {  // Encontra o "pai" do ponto u
        if (parent[u] != u) parent[u] = find(parent[u]);  // Otimização
        return parent[u];
    }

    bool unite(int u, int v) {  // Tenta conectar u e v
        u = find(u); v = find(v);
        if (u == v) return false;  // Já estão conectados -> ciclo!
        parent[v] = u;  // Conecta
        return true;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;  // N = número de pontos, M = número de linhas
    cin >> N >> M;

    DSU dsu(N);
    int cycles = 0;

    for (int i = 0; i < M; i++) {
        int u, v;
        cin >> u >> v;
        if (!dsu.unite(u, v)) cycles++;  // Se não conseguiu conectar, é ciclo!
    }

    cout << cycles << "\n";  // Número de linhas a remover
    return 0;
}
