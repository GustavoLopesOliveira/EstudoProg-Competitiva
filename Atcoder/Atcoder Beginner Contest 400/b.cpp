#include <bits/stdc++.h>

using namespace std;

int main(){
	long long n, m; cin >> n >> m;
	long long max = 10*10*10*10*10*10*10*10*10;

	long long ans; 

	if( n != 1){
		ans =	(pow(n,m+1) -1)/( n -1);
	}else{
		ans = (m+1) * n; 
	}

	if(ans > max || ans < 0){
		cout << "inf" << endl;
		return 0;
	}

	cout << ans << endl;
}
