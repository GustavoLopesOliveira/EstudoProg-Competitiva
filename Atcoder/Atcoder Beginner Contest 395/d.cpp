#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,q; cin >> n >> q;

    map<int,int> pigeonsToNest;
    map<int,int> nestToPigeons;
    for(int i = 1; i <= n; i++){
        pigeonsToNest[i] = i;
        nestToPigeons[i] = i;
    }
    while(q--){
        int type; cin >> type;

        if(type == 1){

        }else if(type == 2){

        }else if(type == 3){

        }
    }
}