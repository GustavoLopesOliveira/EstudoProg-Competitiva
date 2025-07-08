#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second

typedef long long ll;

int main(){

	ll Q; cin >> Q;

	    //quantidade,valor
	queue<pair<ll,ll>> a;

	while(Q--){
		ll q; cin >> q;

		if(q == 1){
			ll c,x; cin >> c >> x;
		 	a.push({c,x});
		}else if(q == 2){
			ll k; cin >> k;
			ll ans = 0;
			
			while(k > 0){
				if(k < a.front().f){
					ll resto = a.front().f - k;
					ans += a.front().s * k;
					a.front().f = resto;
					k = 0;
				}else if( k == a.front().f){
					ans += a.front().s * k;
					a.pop();
					k = 0;
				}else{
					ans += a.front().s * a.front().f;
					k -= a.front().f;
					a.pop();
				}
			}

			cout << ans << endl;
		}
	}
}
