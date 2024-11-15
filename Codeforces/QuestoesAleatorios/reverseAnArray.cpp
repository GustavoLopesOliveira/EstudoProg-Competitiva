#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int vet[n];

    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    for(int i = 0; i < n; i++){
        cout << vet[n - i - 1] << " ";
    }
}