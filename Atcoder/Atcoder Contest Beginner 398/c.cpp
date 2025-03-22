#include <bits/stdc++.h>

using namespace std;
#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

typedef long long ll;

#define f first
#define s second

void solve(){
	FAST_IO
	ll n; cin >> n;
	vector<ll> a(n);

	unordered_map<ll,ll> freq;
	unordered_map<ll,ll> pos;

	for(ll i  = 0; i < n; i++){
		cin >> a[i];
		freq[a[i]]++;
		pos[a[i]] = i + 1;
	}

	ll max_value = -1, max_pos = -1;
	//freq valor,vezes q ele aparece
	//pos : valor, posicao maior;
	for(auto b : freq){
		if(b.s == 1 && b.f > max_value){
			max_value = b.f;
			max_pos = pos[max_value];
		}
	}

	cout << max_pos  << endl;


	
}

int main(){
	solve();
}
