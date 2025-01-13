#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;

    int agua = 0, at = 0;

    for(int i = 0; i < n; i++){
        int t,v;

        cin >> t >> v;

        agua += v;
        
        if(i != 0 && agua > 0){
          agua -= t - at;
        }   
        
        if(agua < 0){
            agua = 0;
        }

        at = t;
    }

    cout << agua << endl;
}