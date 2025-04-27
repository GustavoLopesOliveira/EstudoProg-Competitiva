#include <bits/stdc++.h>

using namespace std;

int main(){

	int n; cin >> n;
	string s;
	
	bool boolean = false;
	int cont = 0;

	while(n--){
		cin >> s;
		if(s == "login") boolean = true;
		if(s == "logout") boolean = false;
		if(s == "private" && !boolean) cont++;
	}

	cout << cont << endl;
}
