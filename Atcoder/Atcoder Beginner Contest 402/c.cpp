#include <bits/stdc++.h>

using namespace std;

int main(){

	int n,m; cin >> n >> m;
	
	vector<unordered_map<int,int>> a(m);

	for(int i = 0; i < m; i++){
		int k; cin >> k;
		a[i][-1] =  k;
		for(int j = 0; j < k; j++){
			int temp; cin >> temp;
			a[i][temp]++;
		}
	}

	for(int i = 0; i < n; i++){
		int b; cin >> b;
		int cont = 0;
		for(int j = 0; j < m; j++){
			if(a[j][b] != 0) a[j][-1]--;
			if(a[j][-1] <= 0)cont++;
		}

		cout << cont << endl;
	}
}
