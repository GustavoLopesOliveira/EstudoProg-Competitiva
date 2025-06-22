#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void busca(vector<ll>& a,ll inicio,ll fim){
	if(inicio <= fim){
		int meio = (inicio+fim)/2;
		cout << a[meio] << " ";
		busca(a,inicio,meio-1);
		busca(a,meio+1,fim);
	}
}

void solve(){
	ll n; cin >> n;

	vector<ll> ans(n);

	for(int i = 0; i < n; i++) ans[i] = i+1;
	
	busca(ans,0,n-1);

	cout << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
