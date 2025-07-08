#include <bits/stdc++.h>

using namespace std;

int main(){

	int n; cin >> n;

	vector<string> a(n);

	for(int i = 0; i < n; i++) cin >> a[i];

	set<string> ss;

	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			string s1 = a[i] + a[j];
			string s2 = a[j] + a[i];
			ss.insert(s1);
			ss.insert(s2);
		}
	}

	cout << ss.size() << endl;


}


