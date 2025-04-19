#include <bits/stdc++.h>

using namespace std;

int main(){
	
	queue<int> q;
	int Q; cin >> Q;

	while(Q--){
		int op; cin >> op;

		if(op == 1){
			int x; cin >> x;
			q.push(x);
		}else{
			cout << q.front() << endl;
			q.pop();
		}
	}

}
