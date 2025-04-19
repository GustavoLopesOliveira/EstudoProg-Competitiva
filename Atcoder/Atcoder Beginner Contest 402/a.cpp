#include <bits/stdc++.h>

using namespace std;

int main(){

	string str; cin >> str;

	string ans = "";

	for(int i = 0; i < str.length(); i++){
		if(str[i] == toupper(str[i])) ans += str[i];
	}

	cout << ans << endl;
}
