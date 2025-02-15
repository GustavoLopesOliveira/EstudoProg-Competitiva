#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    
    vector<vector<int>> mat(n);

    for(int i = 0; i < n; i++){
        int k; cin >> k;
        for(int j = 0; j < k; j++){
            int a; cin >> a;
            mat[i].push_back(a);
        }
    }

    double prob = -1;




    cout << prob << endl;

}
