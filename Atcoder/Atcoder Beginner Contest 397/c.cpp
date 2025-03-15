#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    set<int> left, right;
    vector<int> right_count(n + 1);

    for (int i = n - 1; i >= 0; i--) {
        right.insert(a[i]);
        right_count[i] = right.size();
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        left.insert(a[i]);
        ans = max(ans, (int)(left.size() + right_count[i + 1]));
    }

    cout << ans << endl;
    return 0;
}

