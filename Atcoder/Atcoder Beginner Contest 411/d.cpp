#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,Q; cin >> n >> Q;
	
	string server = "";
	vector<string> pc(n,"");

	while(Q--){
		int q,p; cin >> q >> p;
		p--;

		if(q == 1){
			pc[p] = server;
		}else if (q == 2){
			string s; cin >> s;
			pc[p] += s;
		}else{
         server = pc[p];
		}


	}

	cout << server << endl;
	

}
