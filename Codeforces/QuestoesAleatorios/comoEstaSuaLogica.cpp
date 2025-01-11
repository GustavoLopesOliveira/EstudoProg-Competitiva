#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    vector<int> vet(n);

    int nNeg = 0, nPos = 0;

    for(int i = 0; i < n; i++){
        cin >> vet[i];
        if(vet[i] > 0){
            nPos++;
        }else{
            nNeg++;
        }
    } 

    cout << ((nPos > nNeg) ? nPos : nNeg);


}