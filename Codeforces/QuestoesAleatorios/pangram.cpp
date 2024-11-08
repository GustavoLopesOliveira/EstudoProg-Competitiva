#include <iostream>
#include <set>
#include <cctype>
using namespace std;

int main(){
    int n;
    cin >> n;

    char string[n];
    set<char> alfabeto;
    
    cin >> string;

    for(int i = 0; i < n; i++){
        alfabeto.insert(tolower(string[i]));
    }

    if(alfabeto.size() == 26){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}