#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll n, m; 
    cin >> n >> m;

    vector<ll> b(n), w(m);  

    for (ll i = 0; i < n; i++) cin >> b[i];
    for (ll i = 0; i < m; i++) cin >> w[i];

    ll ans = 0;
    sort(b.rbegin(), b.rend());
    sort(w.rbegin(), w.rend()); 

    ll contB = 0, parada = 0;
    
    for (ll i = 0; i < n; i++) {
        if (b[i] > 0) {
            ans += b[i];
            contB++;
        } else {
            parada = i;
            break;
        }
    }

    for (ll i = 0; i < min(contB, m); i++) { 
        if (w[i] > 0) {
            ans += w[i];
        } else {
            break;
        }
    }

    for (ll i = parada; i < min(n, m); i++) { 
        if (i < n && i < m && b[i] + ans + w[i] > ans) {
            ans += b[i] + w[i];
        } else {
            break;
        }
    }

    cout << ans << endl;
}

