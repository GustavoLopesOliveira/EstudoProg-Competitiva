#include <iostream>
using namespace std;

int main(){
    int y;
    cin >> y;

    do{
        y++;
    }while(y /1000 == (y /100) % 10 || y / 1000 == (y / 10)% 10 || y / 1000 == y % 10 ||
    (y /100) % 10 == (y / 10)% 10 || (y /100) % 10 == y % 10 || 
    (y / 10)% 10 == y % 10);
        
    

    cout << y << endl;
}