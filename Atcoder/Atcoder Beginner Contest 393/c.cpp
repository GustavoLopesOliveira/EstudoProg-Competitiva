#include <bits/stdc++.h>

#define f first
#define s second

typedef long long ll;

using namespace std;

int main(){
    int n,m; cin >> n >> m;
    
    set<pair<int,int>> sii;
    int cont = 0;

    for(int i = 0; i < m; i++){
        int temp1,temp2; cin >> temp1 >> temp2;
        if(sii.count({temp1,temp2}) == 0 && sii.count({temp2,temp1}) == 0 && temp1 != temp2){
            sii.insert({temp1,temp2});
        }else{
            cont++;
        }
    }

    cout << cont << endl;

    
}
