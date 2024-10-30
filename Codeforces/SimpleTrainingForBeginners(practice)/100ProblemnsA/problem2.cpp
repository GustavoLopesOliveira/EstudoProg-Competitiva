#include <iostream>
#include <set>
using namespace std;

int main() {
    int s[4];
    for (int i = 0; i < 4; i++) {
        cin >> s[i];
    }

    set<int> unique_colors;
    for (int i = 0; i < 4; i++) {
        unique_colors.insert(s[i]);
    }

    int needed_to_buy = 4 - unique_colors.size();
    cout << needed_to_buy << endl;

    return 0;
}
