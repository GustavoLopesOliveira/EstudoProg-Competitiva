#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;

	int ans = 400/n;

	if(400 % n != 0) ans = -1;

	cout << ans << endl;
}
