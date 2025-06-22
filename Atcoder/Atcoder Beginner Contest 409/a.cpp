#include <bits/stdc++.h>

using namespace std;

int main(){

	int n; cin >> n;
	string a,b; 
	cin >> a;
	cin >> b;

	bool c = false;


	for(int i = 0; i < n and !c; i++){
		if(a[i] == 'o' and b[i] == 'o') c = true;
	}

	cout << (c ? "Yes" : "No") << endl;
}
