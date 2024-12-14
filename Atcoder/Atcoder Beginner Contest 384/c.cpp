#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c, d, e;
    const int tam = 31;

    cin >> a >> b >> c >> d >> e;

    int vet[tam];
    string vetChar[tam];

    vet[0] = a + b + c + d + e;
    vet[1] = b + c + d + e;
    vet[2] = a + c + d + e;
    vet[3] = a + b + d + e;
    vet[4] = a + b + c + e;
    vet[5] = a + b + c + d;
    vet[6] = c + d + e;
    vet[7] = b + d + e;
    vet[8] = a + d + e;
    vet[9] = b + c + e;
    vet[10] = a + c + e;
    vet[11] = b + c + d;
    vet[12] = a + b + e;
    vet[13] = a + c + d;
    vet[14] = a + b + d;
    vet[15] = a + b + c;
    vet[16] = d + e;
    vet[17] = c + e;
    vet[18] = b + e;
    vet[19] = c + d;
    vet[20] = a + e;
    vet[21] = b + d;
    vet[22] = a + d;
    vet[23] = b + c;
    vet[24] = a + c;
    vet[25] = a + b;
    vet[26] = e;
    vet[27] = d;
    vet[28] = c;
    vet[29] = b;
    vet[30] = a;

    // Strings
    vetChar[0] = "ABCDE";
    vetChar[1] = "BCDE";
    vetChar[2] = "ACDE";
    vetChar[3] = "ABDE";
    vetChar[4] = "ABCE";
    vetChar[5] = "ABCD";
    vetChar[6] = "CDE";
    vetChar[7] = "BDE";
    vetChar[8] = "ADE";
    vetChar[9] = "BCE";
    vetChar[10] = "ACE";
    vetChar[11] = "BCD";
    vetChar[12] = "ABE";
    vetChar[13] = "ACD";
    vetChar[14] = "ABD";
    vetChar[15] = "ABC";
    vetChar[16] = "DE";
    vetChar[17] = "CE";
    vetChar[18] = "BE";
    vetChar[19] = "CD";
    vetChar[20] = "AE";
    vetChar[21] = "BD";
    vetChar[22] = "AD";
    vetChar[23] = "BC";
    vetChar[24] = "AC";
    vetChar[25] = "AB";
    vetChar[26] = "E";
    vetChar[27] = "D";
    vetChar[28] = "C";
    vetChar[29] = "B";
    vetChar[30] = "A";

    // Ordenacao
    for (int i = 0; i < tam - 1; i++) {
        for (int j = 0; j < tam - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                int temp = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = temp;

                string tempChar = vetChar[j];
                vetChar[j] = vetChar[j + 1];
                vetChar[j + 1] = tempChar;
            } else if(vet[j] == vet[j + 1]){
                if(vetChar[j] < vetChar[j + 1]){
                  string tempChar = vetChar[j];
                  vetChar[j] = vetChar[j + 1];
                  vetChar[j + 1] = tempChar;
                }
            }
        }
    }

    for (int i = 0; i < tam; i++) {
        cout << vetChar[tam - 1 - i] << endl;
    }

    return 0;
}
