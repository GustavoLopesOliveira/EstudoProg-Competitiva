#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	
	ll n,Q;
	cin >> n >> Q;

	ll a[n];
	ll primeiro = 0;
	ll ultimo = n-1;

	for(int i = 0; i < n; i++) a[i] = i+1;

	 while(Q--){
		ll q;

		cin >> q;

		if(q == 1){
			ll p,x; cin >> p >> x;
			p--;

			a[(primeiro + p)%n] = x;
		}else if(q == 2 ){
			ll p; cin >> p;
			p--;

			cout << a[(primeiro + p)%n] << endl;
		}else{
			ll k; cin >> k;
			k = k%n;
			primeiro = (primeiro + k)%n ;
			ultimo = (ultimo + k)%n ;
		}
		
	 }

}
