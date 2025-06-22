#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n,x; cin >> n >> x;

	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	//1 0 1 0 1	
	bool ans = true;
	int tempo = x;
	bool ativado = false;

	for(int i = 0; i < n; i++){
		if(a[i] == 1){ 
			ativado = true;
			if(tempo <= 0) ans = false;
		}
		if(ativado) tempo--;
	}

	cout << (ans ? "YES" : "NO")  << endl;
}

int main(){
	
	int tt; cin >> tt;

	while(tt--){
		solve();
	}
}
