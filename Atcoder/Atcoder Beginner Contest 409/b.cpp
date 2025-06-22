#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void aux(ll vet[],ll n, ll valor){
	for(int i = 0; i < n; i++){
		if(i <= valor) vet[i]++;
	}
}

int main(){
	ll n; cin >> n;
	vector<ll> a(n);
	for(ll i = 0; i < n; i++) cin >> a[i];
	int maxi = 0;
	
	ll vet[n+1] = {0};

	for(ll i = 0; i < n; i++){
		aux(vet,n+1,a[i]);
	}

	for(int i = 0; i <= n; i++){
		if(vet[i] >= i){
			if(i > maxi) maxi = i;
		}
	}

	cout << maxi << endl;
}
