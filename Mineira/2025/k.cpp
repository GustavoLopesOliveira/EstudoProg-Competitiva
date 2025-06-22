#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second


void aux(vector<pair<int,int>>& a){
	
	for(int i = 0; i < a.size(); i++){
		int b = a[i].f;
		b += a[i].s ;
		a[i].f = b;
	}

}

int main(){

	int n; cin >> n;

	vector<pair<int,int>> a(n);

	for(int i = 0; i < n; i++){
		int b,c; cin >> b >> c;
		a[i] = {b,c};
	}

	for(int i = 0; i < n; i++){
		cout << a[i].f << ' ' << (i+1) << endl;
		aux(a);
	}
}
