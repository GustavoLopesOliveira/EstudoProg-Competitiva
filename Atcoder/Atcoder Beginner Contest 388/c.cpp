#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int out = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(v[i] <= v[j]/2){
                out++;
            }
        }
    }

    cout << out << endl;
}