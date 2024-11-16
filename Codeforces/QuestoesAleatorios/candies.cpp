#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int vet[n],candies = 0;

    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    int a,b;

    cin >> a >> b;

    for(int i = a; i <= b; i++){
        candies += vet[i];
    }

    cout << candies << endl;

}