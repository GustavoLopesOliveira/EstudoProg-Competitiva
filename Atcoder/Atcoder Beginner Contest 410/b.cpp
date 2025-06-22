#include <bits/stdc++.h>

using namespace std;

vector<int> ans;

int main(){

	int n,q; cin >> n >> q;

	vector<int> x(q);
	for(int i = 0; i < q; i++) cin >> x[i];

	vector<int> aux(n+1,0);

	for(int i = 0; i < q; i++){
		if(x[i] == 0){

			int minPos = 1,min = aux[1];

			for(int j = 1; j <= n; j++){
				if(min > aux[j]){
					min = aux[j];
					minPos = j;
				}
			}
			aux[minPos]++;
			ans.push_back(minPos);

		}else{
			aux[x[i]]++;
			ans.push_back(x[i]);
		}

	}


	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << " ";
	}

	cout << endl;
}
