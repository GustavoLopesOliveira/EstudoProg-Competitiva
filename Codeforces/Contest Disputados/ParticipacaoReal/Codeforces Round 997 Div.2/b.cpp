#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,m; cin >> n >> m;

        vector<pair<int,int>> v(n);

        for(int i = 0; i < n; i++){
            int tempA, tempB;
            cin >> tempA >> tempB;
            
            v[i] = make_pair(tempA,tempB);
        }
    }
}