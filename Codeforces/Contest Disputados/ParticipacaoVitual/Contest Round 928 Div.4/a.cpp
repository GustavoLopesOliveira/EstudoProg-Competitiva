#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        string str;
        cin >> str;

        int contA = 0, contB = 0;

        for(int i = 0; i < 5; i++){
            if(str[i] == 'A'){
                contA++;
            }else{
                contB++;
            }
        }

        if(contA > contB){
            cout << "A" << endl;
        }else{
            cout << "B" << endl;
        }
    }
}