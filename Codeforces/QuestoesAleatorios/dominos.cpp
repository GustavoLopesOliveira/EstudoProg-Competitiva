#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;
    
    // Calcula o número máximo de dominós que podem ser colocados
    int max_dominoes = (M * N) / 2;
    
    cout << max_dominoes << endl;
    return 0;
}
