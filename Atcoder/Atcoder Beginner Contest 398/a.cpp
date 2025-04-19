#include <bits/stdc++.h>

using namespace std;

int main(){

	int n; cin >> n;

	string ans = "";

	if(n % 2 == 0){
		
		for(int i = 0; i < n/2 - 1; i++)ans += '-';

		ans += '=';
		ans += '=';

		for(int i = 0; i < n/2 -1; i++)ans += '-';
		
	}else{
		
		for(int i = 0; i < n/2; i++) ans += '-';
		

		ans += '=';

		for(int i = 0; i < n/2; i++) ans += '-';
	}

	cout << ans << endl;

}
