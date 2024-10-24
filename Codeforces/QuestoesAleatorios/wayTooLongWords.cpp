#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> palavra;

    for(int i = 1; i <= n; i++){
        string entrada;
        cin >> entrada;

        palavra.push_back(entrada);

        if(entrada.size() > 10){
          int quantidade = entrada.size() - 2;
            cout << entrada.front() << quantidade << entrada.back() << endl;
        } else {
            cout << entrada << endl;
        }

        entrada.clear();
    }
}