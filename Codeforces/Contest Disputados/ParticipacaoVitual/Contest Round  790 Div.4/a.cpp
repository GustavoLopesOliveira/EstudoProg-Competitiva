#include<iostream>
#include <string>

using namespace std; 

int main(){
    int t; cin >> t;

    while(t--){
        string n; cin >> n;

        if(n[0] -'0' + n[1] - '0' + n[2] - '0' == n[3] - '0' + n[4] - '0' + n[5] - '0'){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
}