#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt; cin >> tt;
    
    while(tt--){
      int n; cin >> n;
      
      string str; cin >> str;
      
      set<char> Correto;
      set<char> s;
      
      Correto.insert('T');
      Correto.insert('i');
      Correto.insert('m');
      Correto.insert('u');
      Correto.insert('r');
      
      for(int i = 0; i < n; i++){
        s.insert(str[i]);
      }
      
      if(s == Correto && n == 5){
        cout << "YES" << endl;
      }else{
        cout << "NO" << endl;
      }
    }
}