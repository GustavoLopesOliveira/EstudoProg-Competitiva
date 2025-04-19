#include <bits/stdc++.h>
using namespace std;



int main(){

	int n; cin >> n;
	vector<int> a(n),b(n);

	for(int i = 0; i < n; i++){
		cin >> a[i];
		b[i] = a[i];
	}

	sort(b.rbegin(),b.rend());
					//valor,r
	unordered_map<int,int> ans;
	
	int r = 1;
	for(int i = 0; i < n; i++){
		if(ans[b[i]] == 0){
			ans[b[i]] = r;
			r++;
		}else{
			r++;
		}
	}

	for(int i = 0; i < n; i++){
		cout << ans[a[i]] << endl;
	}

}
