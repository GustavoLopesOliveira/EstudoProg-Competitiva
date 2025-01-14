#include <bits/stdc++.h>
using namespace std;

int main(){
    string str; cin >> str;

    int cont = 0;

    for(int i = 0; i < str.size(); i++){
        if(i < str.size() - 1){
          if(str[i] == '0' && str[i + 1] == '0'){
              cont++;
              i+= 1;
          }
        }
    }
    
    
  
    cout << str.size() - cont << endl;
}