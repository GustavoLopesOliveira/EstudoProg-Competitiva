#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n,m; cin >> n >> m;

        vector<vector<int>> v(n,vector(m/n,0));
        vector<int> ordem;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin >> v[i][j];
            }
        }

        stack<int> pilha;
        pilha.push(-1);



        while(!v.empty()){
            if(*min_element(v.begin(),v.end()) > pilha.top()){
                pilha.push(min_element(v.begin(),v.end()));
                ordem.push_back(min_element(v.begin(),v.end()));
                v.erase(min_element(v.begin(),v.end()));

            }else{
                cout << -1 << endl;
                return 0;
            }
        }

        for(auto c : ordem){
            cout << c << " ";
        }

        cout << endl;
    }
}