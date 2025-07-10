#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,c; cin >> n >> m >> c;

    vector<int> b(m);
    for(int i = 0; i < m; i++) cin >> b[i];

    vector<vector<int>> a( n, vector<int>(m,0) );

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int ans = 0;


    for(int i = 0; i < n; i++){
        int aux = c;
        for(int j = 0; j < m; j++){
            aux += a[i][j] * b[j];
        }

        if(aux > 0) ans++;
    }

    cout << ans << endl;
}
