#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){

	ll n,h,m; cin >> n >> h >> m;
		
	ll ans = 0;

	vector<pair<ll,ll>> mosters(n);

	for(int i = 0; i < n; i++){
		int a,b; cin >> a >> b;
		mosters[i] = {a,b};
	}

	for(int i = 0; i < n; i++){
		int a = mosters[i].first;
		int b = mosters[i].second;

		if(a < b){
			if(h >= a){
				h -= a;
				ans++;
			}else if(m >= b){
				m -= b;
				ans++;
			}
		}else{
			if(m >= b ){
				m -= b;
				ans++;
			}else if(h >= a){
				h -= a;
				ans++;
			}
		}
	}

	cout << ans << endl;

}
