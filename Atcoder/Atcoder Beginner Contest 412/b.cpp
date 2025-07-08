#include <bits/stdc++.h>

using namespace std;

bool busca(string str, char c){
	for(int i  = 0; i < str.size(); i++){
		if(str[i] == c){
			return true;
		}
	}

	return false;

}


int main(){
	string t,h;
	cin >> t >> h;

	bool ans = true;

	for(int i = 0; i < t.size(); i++){
		if(i > 0){
			char c = t[i];
			if(isupper(c)){
				if(!busca(h,t[i-1])){
					ans = false;
				}
			}
		}
	}

	cout << (ans ? "Yes" : "No") << endl;
}
