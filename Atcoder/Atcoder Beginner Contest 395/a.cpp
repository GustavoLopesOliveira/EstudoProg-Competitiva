#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    bool c = true;

    for(int i = 1; i < n; i++){
        if(v[i] <= v[i-1]) c = false;
    }

    cout << (c ? "Yes" : "No") << endl;
}