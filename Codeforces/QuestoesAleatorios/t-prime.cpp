#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool ePrimo(ll n){
  if(n == 1) return false;
  
  for(ll i = 2; i * i <= n; i++)  if(n % i == 0) return false;
  
  return true;
}

bool tPrime(ll n){
  double a = sqrt(n);
  ll b = a;
  
  if(a != b) return false;
  
  
  if(ePrimo(sqrt(n))) return true;

  return false;
}

int main(){
    ll t; cin >> t;

    while(t--){
        ll n; cin >> n;

        cout << (tPrime(n) ? "YES" : "NO") << endl;
    }

}