#include <bits/stdc++.h>

using namespace std;

void solve(){
	int str; cin >> str;

	double d = pow(str,1/2.0);
	int i = pow(str,1/2.0);

	if(i == d){
		cout << i << " 0" << endl;
	}else{
		cout << -1 << endl;
	}
}


int main(){
	int tt; cin >> tt;
	while(tt--){
		solve();
	}
}
