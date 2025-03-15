#include <bits/stdc++.h>
using namespace std;

int main(){
	string str; cin >> str;

	int ans = 0;
	int tam = str.length();
	

	for(int i = 0; i < tam-1; i++){
		if(str[i] == str[i+1]) {
			ans++;
		}
	}
	
	if(str[tam-1] == 'i') ans++;	
	if(str[0] == 'o') ans++;

	cout << ans << endl;
}
