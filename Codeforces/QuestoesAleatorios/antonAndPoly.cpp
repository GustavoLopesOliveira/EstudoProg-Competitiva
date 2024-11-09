#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    long long somaLados = 0;
    for(int i = 0; i < n; i++){
        string entrada;
        cin >> entrada;

        if(entrada == "Tetrahedron"){
            somaLados += 4;
        }else if(entrada == "Cube"){
            somaLados += 6;
        }else if(entrada == "Octahedron"){
            somaLados += 8;
        }else if(entrada == "Dodecahedron"){
            somaLados += 12;
        }else if ( entrada == "Icosahedron"){
            somaLados += 20;
        }
    }

    cout << somaLados << endl;
}