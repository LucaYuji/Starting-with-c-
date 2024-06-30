#include <iostream>
using namespace std;
int main(){

    //Tipo e nome de variavel;
    // tipo e nome = valor;
    //declarando a variavel
    int numero_inteiro = 0;
    char letra = 'A'; // "letra" somente um caracter mais letras = char letras[20] tamanho de 20 caracteres
    double decimal = 2.33334; //2.399999999 precisão maior
    float decimal2 = 2.3; //2.5 precisão menor
    bool verdadeiro_or_false = true; // True=1 or False=0
    string nome = "Lucas YUji Tome"; // "recebe um texto completo"

    // cout << numero_inteiro << "\n";
    // cout << letra << "\n";
    // cout << decimal << "\n";
    // cout << decimal2 << "\n";
    // cout << verdadeiro_or_false << "\n";
    // cout << nome << "\n";
    // um cout para imprimir tudo
    // cout << numero_inteiro << "\n" << letra << "\n" << decimal << "\n" << decimal2 << "\n" << verdadeiro_or_false << "\n" << nome << "\n";

    //  lendo valores do teclado, declarando valores dentro das variaveis com o cin >> ( << dados de saída, >> dados de entrada)
    cout << "Digite o numero de vidas: "; 
    cin >> numero_inteiro;
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "dinheiro: ";
    cin >> decimal;
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite numero: ";
    cin >> decimal2;
    cout << "verdadeiro ou falso: ";
    cin >> verdadeiro_or_false;

    return 0;
}