#include <bits/stdc++.h>

using namespace std;

int contPairs(string str, int n){
	int ans = 0;
	for(int i = 0; i < n/2; i++){
		if(str[i] == str[n-i-1]) ans++;
	}
	return ans;
}

void solve(){
	int n,k; cin >> n >> k;

	string str; cin >> str;
	int quant = contPairs(str,n);

	if(quant == k){
		cout << "YES" << endl;
		return;
	}


}

int main(){
	int tt; cin >> tt;

	while(tt--){
		solve();
	}
}
