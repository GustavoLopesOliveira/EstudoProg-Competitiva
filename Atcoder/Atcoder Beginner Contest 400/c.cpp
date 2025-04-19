#include <bits/stdc++.h>

using namespace std;

bool eQuad(int n){
	int auxI = n;
	double aux = n;

	if(aux - auxI <= 0.000001) return true;
	return false;
}	

bool pot3(int n){
 while(n != 1){
	if(eQuad(n)) return true;
	n = n/2;
 }
 return false;
}

bool pot2(int n){
		
	while(n != 1){
		if(n % 2 == 1) return false;
		n = n/2;
	}

	return true;
}

int main(){
	int n; cin >> n;

	int ans = 0;
	int ans1 = 0, ans2 = 0;

	for(int i = 1; i <= n; i++){
		if(pot2(i)){
			ans1++;
			cout << i << endl;
		}else if(pot3(i)){
			ans2++;
		}
	}

	ans = ans1 + ans2/2;

	cout << ans << endl;
}
