#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    for(int i = 1; i <= n; i++){
        
        string var;
        if(i == n){
            var = "it";
        } else {
            var = "that";
        }

        if(i % 2 == 1){

            if(i != n){
                cout << "I hate " << var << " ";
            } else {
                cout << "I hate " << var;
            }
            
        } else {

            if(i != n){
                cout << "I love " << var << " ";
            } else {
                cout << "I love " << var;
            }
            
        }
    }
    
    cout << endl;
}