#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,a,b; cin >> n >> a >> b;

    string s; cin >> s;
    int passaram = 0;
    int passaramB = 0;
    for(int i = 0; i < n; i++){
        string ans = "No";
    
        char c = s[i];

        if(c == 'a'){
            if(a + b > passaram){
                passaram++;
                ans = "Yes";
            }

        }else if (c == 'b'){
            if(a + b > passaram){
                if(passaramB < b){
                    ans = "Yes";
                    passaram++;
                    passaramB++;
                }
            }
        }

        cout << ans << endl;
    }
}
