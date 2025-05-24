#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int toNumber(char c ){
	return ((int) c - '0');
}

int main(){
	string str; cin >> str;

	ll ans = str.size();

	for(int i = 1; i < str.size(); i++){
		int c1 = toNumber(str[i-1]);
		int c2 = toNumber(str[i]);
		if(c1 > c2){
			ans += c1;
		}else if(c1 < c2){
			ans += 10 - c2;
			ans += c2;
		}
	}

	cout << ans << endl;
}
