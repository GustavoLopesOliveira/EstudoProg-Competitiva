#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;

    vector<int> v(n);

    for(long long i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    bool breaki = false;

    for(long long i = 1; i < n && !breaki; i++){
        if(v[i] - v[i-1] != 1){
            cout << (v[i] + v[i -1])/2 << endl;
            breaki = true;
        }
    }

    if(n == 2 && !breaki){
        if(v[1] == 1){
            cout << 2 << endl;
        }else{
            cout << 1 << endl;
        }
    }else if(!breaki){
      cout << n << endl;
    }
    
    
    
}