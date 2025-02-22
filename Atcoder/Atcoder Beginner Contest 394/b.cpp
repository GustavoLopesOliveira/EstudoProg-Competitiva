#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define f first
#define s second

bool tamanho(string str1,string str2){
    return str1.length() < str2.length();
}

int main(){
    int n; cin >> n;

    vector<string> vs(n);

    for(int i = 0; i < n; i++) cin >> vs[i];
    
    sort(vs.begin(),vs.end(),tamanho);

    for(int i = 0; i < n; i++){
        cout << vs[i];
    }

    cout << endl;

}