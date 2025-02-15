#include <bits/stdc++.h>

using namespace std;

int mdc(int a, int b){
    if(b == 0) return a;
    return mdc(b,a%b);
}

int main(){
    int n,k; cin >> n >> k;

    vector<int> vi(n);

    for(int i = 0; i < n; i++) cin >> vi[i];

    for(int i = 0; i < n; i++){
        int maior = -1;
        
        for(int j = 0; j < n; j++){
            if(vi[i] != vi[j]){
                maior = max(gcd(vi[i],vi[j]),maior);
            }
        }

        cout << maior << endl;
    }
}
