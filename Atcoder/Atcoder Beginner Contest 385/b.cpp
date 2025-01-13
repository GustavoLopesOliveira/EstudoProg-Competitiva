#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, w, x, y;
    // Numero de linhas e colunas e posicao inicial
    cin >> h >> w >> x >> y;

    char mat[h + 1][w+1];
    
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> mat[i][j];
        }
    }

    string str;
    cin >> str;

    set<pair<int, int>> casas;

    for (int k = 0; k < str.size(); k++){
        if (str[k] == 'L'){
            if (mat[x-1][y - 1 -1] != '#'){
                if (mat[x-1][y - 1 -1] == '@'){
                    casas.insert({x-1, y - 1 -1});
                }
                y = y - 1;
            }
        }
        else if (str[k] == 'R'){
            if (mat[x-1][y + 1-1] != '#'){
                if (mat[x-1][y + 1 -1] == '@'){
                    casas.insert({x-1, y + 1 -1});
                }
                y = y + 1;
            }
        }
        else if (str[k] == 'D'){
            if (mat[x + 1-1][y-1] != '#'){
                if (mat[x + 1-1][y-1] == '@'){
                    casas.insert({x + 1 -1, y-1});
                }
                x = x + 1; 
            }
        }
        else if(str[k] == 'U'){
            if (mat[x - 1-1][y-1] != '#'){
                if (mat[x - 1-1][y-1] == '@'){
                    casas.insert({x - 1-1, y-1});
                }
                x = x - 1;
            }
        }
    }

    cout << x << " " << y << " " << casas.size() << endl;
}