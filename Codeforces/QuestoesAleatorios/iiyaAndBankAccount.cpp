#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;


    int a = n;
    if(n/10 > a) a = n/10;
    if(n%10 + (n/100)*10 > a) a = n%10 + (n/100) * 10;
    cout << a << endl;
}