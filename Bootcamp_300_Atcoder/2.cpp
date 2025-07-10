#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = -1;

                //O(n)
    int maior = *max_element(a.begin(),a.end());
    
    //O(n²)
    for(int i = 1; i <= maior; i++){
        int soma = 0;
       
        for(int j = 0; j < n; j++){
            soma += (a[j] - i) * (a[j] - i);
        }
        // cout << soma << " ";
        if(ans == -1){
            ans = soma;
        }else{
            ans = min(soma,ans);
        }
    }

    cout << ans << endl;
}
