#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c; cin >> a >> b >> c;

	bool ans = false;
		
	if(a * b == c and c/b == a and c/a == b) ans = true;

	cout << ( ans ? "S" : "N") << endl;
}
