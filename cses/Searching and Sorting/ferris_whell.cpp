#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,x; cin >> n >> x;
    vector<int> children(n);
    //O(n)
    for(int i = 0; i < n; i++) cin >> children[i];
    
    //O(n log n)
    sort(children.begin(),children.end());

    int ans = 0;
    int temp = 0;
    
    //O(n)
    for(int i = 0; i < n; i++){
        if(temp + children[i] <= x){
            temp += children[i];
           // cout << temp << " ";
        }else{
            ans++;
            temp = children[i];
           // cout << temp << " ";
        }
    }
    ans++;
    cout << ans << endl;
}
