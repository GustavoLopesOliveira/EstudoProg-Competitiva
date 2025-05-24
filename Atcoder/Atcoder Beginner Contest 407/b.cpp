#include <bits/stdc++.h>

using namespace std;

int main(){
	int x ,y; cin >> x >> y;

	int a[] = {1,2,3,4,5,6};
	int b[] = {1,2,3,4,5,6};

	double ans = 0;

	int cont = 0;

	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			if(a[i] + b[j] >= x || abs(a[i] - b[j]) >= y) cont++;
		}
	}

	ans = (double) cont/36.0;

	printf("%.10lf\n",ans);
}
