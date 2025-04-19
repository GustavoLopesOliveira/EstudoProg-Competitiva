#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define modu 1e9

int main(){
	
	ll n,k; cin >> n >> k;
	vector<ll> prefix(n+1);
	
	for(int i = 0; i < k; i++) prefix[i] = 1;
	
	for(int i = k; i <= n; i++) prefix[i] += prefix[i-1]; 

	cout << prefix[n] << endl;



}
