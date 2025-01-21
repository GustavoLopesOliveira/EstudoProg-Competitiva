#include<bits/stdc++.h>

using namespace std;

bool eSorte(int n){
    if(n == 4 || n == 7) return true;
    
    if(!(n % 10 == 4 || n % 10 == 7)){
        return false;
    }

    return true && eSorte(n/10);
}

int main(){
    int n; cin >> n;

    if(eSorte(n)){
        cout << "YES" << endl;
    }else{
      
        vector<int> div;

        for(int i = 2; i <= n; i++){
            if(n % i == 0){
                div.push_back(i);
            }
        }

        bool c = false;

        for(int i = 0; i < div.size() && !c; i++){
            if(eSorte(div[i])){
                c = true;
            }
        }

        if(c){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }

}