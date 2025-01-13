#include <bits/stdc++.h>

using namespace std;



int achar(char c, string str){
    for(int i = 0; i < str.size(); i++){
        if(str[i] == c){
            return i;
        }
    }

    return -1;
}

int main(){
    char c; cin >> c;
    string str; cin >> str;

    string alfa = "qwertyuiopasdfghjkl;zxcvbnm,./";

    if(c == 'R'){
        for(int i = 0; i < str.size(); i++){
            if(str[i] != 'q'){
                int pos = achar(str[i],alfa);
                str[i] = alfa[pos - 1];
            }
        }
    }else{
        for(int i = 0; i < str.size(); i++){
            if(str[i] != '/'){
                int pos = achar(str[i],alfa);
                str[i] = alfa[pos + 1];
            }
        }
    }

    cout << str << endl;
}