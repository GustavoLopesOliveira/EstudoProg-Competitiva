#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];

	sort(a.begin(),a.end());

	double const1 = a[1]/a[0];
	double const2 = a[n-2]/a[n-1];

	bool b1 = true ,b2 = true;

	for(int i = 2; i < n && b1; i++){
		double fator = a[i]/a[i-1];
		if(fator != const1){
			b1 = false;
		}
	}

	for(int i = n-2; i > 0 && b2; i--){
		double fator = a[i]/a[i-1];
		if(fator != const2){
			b2 = false;
		}
	}

	cout << ( b1 || b2 ? "Yes" : "No") << endl;
	
}


int main(){
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}
