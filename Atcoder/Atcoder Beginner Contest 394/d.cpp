#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define f first
#define s second

bool ePossible(string str){
    stack<char> s;

    for(int i = 0; i < str.length(); i++){
        char c = str[i];
        if(c == '(' || c == '[' || c == '<'){
            s.push(c);
        }else{
            if(s.empty()) return false;
          
            if(s.top() == '(' && c == ')'){
                s.pop();
            }else if(s.top() == '[' && c == ']'){
                s.pop();
            }else if(s.top() == '<' && c == '>'){
                s.pop();
            }else{
                return false;
            }
        }
    }

    if(s.empty()) return true;

    return false;

}

int main(){
    string str; cin >> str;
    
    if(ePossible(str)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}