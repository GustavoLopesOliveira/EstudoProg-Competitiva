#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    
    while(tt--){
      int n; cin >> n;
      
      string str1, str2;
      
      cin >> str1;
      cin >> str2;
      
      for(int i = 0; i < str1.size(); i++){
        if(str1[i] == 'G'){
          str1[i] = 'B';
        }
        
        if(str2[i] == 'G'){
          str2[i] = 'B';
        }
      }
      
      if(str1 == str2){
        cout << "YES" << endl;
      }else{
        cout << "NO" << endl;
      }
      
      
      
      
    }
}