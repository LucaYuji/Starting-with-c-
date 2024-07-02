#include <iostream>
using namespace std;
int main(){

    int n1 = 10;

    // operador pos fixado
    cout << "sem incremento = " << n1++ << "\n";
    // operador pré fixado
    cout << "com incremento = " << ++n1 << "\n";
    // operador pos fixado
    cout << "sem decremento = " << n1-- << "\n";
    // operador pré fixado
    cout << "com decremento = " << --n1 << "\n";

    // n1 = n1 + 1; incremento
    // n1 = n1 - 1; decremento

    //n1 += 1; // incremento simplificado (direto)
    // n1 ++; // forma mais contraida para adicionar 1
    // n1 *= 30; // multiplicação
    
    cout << "incremento = " << n1 << "\n";

    // n1 -= 1; // decremento direto    
    // n1 --; // decremento contraida para subtrair 1
    // n1 /= 3; // divisão
    // n1 %= 2; // resto

    cout << "decremento = " << n1 << "\n";

    return 0;
}