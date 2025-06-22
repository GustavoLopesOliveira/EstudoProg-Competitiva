#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n,q; cin >> n >> q;
	vector<int> a(q);
	for(int i = 0; i < q; i++) cin >> a[i];

	vector<bool> squares(n,false);
	n--;

	int ans = 0;

	for(int i = 0; i < q; i++){
		int pos = a[i] - 1;
		
		if(squares[pos] == false){
			bool pode = true;

			if(pos < n){
				if(squares[pos+1] == true) pode = false; 
			}

			if(pos > 0){
				if(squares[pos-1] == true) pode = false;
			}
			
			if(pos != 0 && pos != n){
				if(squares[pos-1] == true && squares[pos+1] == true){
					ans--;
					pode = false;
				}
			}

			if(pode) ans++;
			squares[pos] = true;

		}else{

			if(pos != 0 && pos != n){
				if(squares[pos -1] == true && squares[pos + 1] == true){
					ans++;
				}else if( squares[pos-1] == false && squares[pos+1] == false){
					ans--;
				}
			}else if (pos == 0){
				if(squares[pos + 1] == false) ans--;
			}else{
				if(squares[pos-1] == false) ans--;
			}

			squares[pos] = false;
		}

		cout << ans << endl;
	}
}
