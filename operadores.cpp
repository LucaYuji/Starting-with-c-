#include <iostream>
using namespace std;
int n1, n2;
int main(){
    // operadores matemáticos: + - / * % ()
    int n3, n4;
    int res;
    int res2;
    int res3;
    int res4;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res = (n1 + n2 + n3 + n4) - 10;
    res2 = (n1 + n2) * n4;
    res3 =n1 / n3; 
    res4 =n1 % n2; // mod (%) restorna o resto da divisão
    cout << "Resultado = " << res << "\n" << "Resultado 2 = " << res2 << "\n" << "Resultado 3 = " << res3 << "\n" << "Resultado 4 = " << res4;
    return 0;
}