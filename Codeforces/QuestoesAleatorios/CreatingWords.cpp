#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  
  for(int i = 0; i < t; i++){
    string string1,string2;
    cin >> string1 >> string2;
    
    cout << string2[0] << string1[1] << string1[2] << " " << string1[0] << string2[1] << string2[2] << endl;
  }
  
}