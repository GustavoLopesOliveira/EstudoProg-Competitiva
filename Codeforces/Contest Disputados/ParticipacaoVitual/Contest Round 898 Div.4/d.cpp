#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
       int n,k; cin >> n >> k;

       string str; cin >> str; 

        int quantMin = 0;

       for(int i = 0; i < n; i++){
            if(str[i] == 'B'){
                int j;
                for( j = 0; j < k; j++){
                    if(i + j < n){
                        if(str[i + j] == 'B'){
                            quantMin++;
                            str[i + j] = 'W';
                     
                        }    
                    }
                }
                i += k + 1;
            }
       }

       cout << quantMin << endl;
    }
}