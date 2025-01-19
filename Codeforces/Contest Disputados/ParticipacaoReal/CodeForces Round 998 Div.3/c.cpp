#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int score = 0;

        int n,k; cin >> n >> k;
        vector<int> v(n);

        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        sort(v.begin(),v.end());
        

        for(int i = 0; i < n/2; i++){
            if(*min_element(v.begin(),v.end()) + *upper_bound(v.begin(),v.end(),k -1 -*min_element(v.begin(),v.end())) == k){
                score++;
                v.erase(upper_bound(v.begin(),v.end(),k -1 - *min_element(v.begin(),v.end())));
                v.erase(min_element(v.begin(),v.end()));
            }else{
                v.erase(min_element(v.begin(),v.end()));
                v.erase(min_element(v.begin(),v.end()));
            }

        }



        cout << score << endl;
    }
}