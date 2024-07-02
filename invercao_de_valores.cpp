#include <iostream>
using namespace std;
int main(){

    int num = 10;
    cout << "valor = " << num << "\n";

    //inversão de valor
    // num = num * -1;
    cout << "valor invertido = " << -num << "\n"; // momentaneo
    
    num = -num;
    cout << "valor = " << num << "\n";


    return 0;
}