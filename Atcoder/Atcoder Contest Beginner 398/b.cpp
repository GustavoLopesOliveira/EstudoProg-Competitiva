#include <bits/stdc++.h>

using namespace std;

int main(){

	vector<int> a(7);
	for(int i = 0; i < 7; i++) cin >> a[i];

	sort(a.begin(),a.end());

	bool c1 = false,c2 = false;
	int temp = -1;
	for(int i = 2; i < 7; i++){
		if(a[i] == a[i-1] && a[i] == a[i-2]){
			c1 = true;
			temp = a[i];
			break;
		}
	}

	for(int i = 1; i < 7; i++){
		if(a[i] == a[i-1] && a[i] != temp){
			c2 = true;
			break;
		}
	}

	cout << (c1 && c2 ? "Yes" : "No") << endl;
}
