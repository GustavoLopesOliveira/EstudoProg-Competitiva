#include <iostream>
using namespace std;

int main(){
  int t;
  cin >> t;
  
  for(int i = 0; i < t; i++){
    long long a,b,result;
    cin >> a >> b;
    
    if(a % b == 0){
      result = 0;
    }else {
      result = a % b;
      result = b - result;
    }
    
    
    cout << result << endl;
  }
}