#include <bits/stdc++.h>

using namespace std;

int main(){
	stack<int> s;

	for(int i = 0; i < 100; i++) s.push(0);


	int q; cin >> q;

	while(q--){
		int opcao; cin >> opcao;

		if(opcao == 1){
			int entra; cin >> entra;
			s.push(entra);
		}else{
			cout << s.top() << endl;
			s.pop();
		}
	}
}
