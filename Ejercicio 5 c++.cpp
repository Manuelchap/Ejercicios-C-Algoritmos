#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


char limpiarCaracter(char c) {
    c = tolower(c);
    switch (c) { 
        case -96: return 'a'; 
        case -91: return 'e'; 
        case -87: return 'i'; 
        case -79: return 'o'; 
        case -77: return 'u'; 
        default:
            if (c >= 'a' && c <= 'z') return c;
            else return '\0'; 
    }
}

bool esPalindromo(string texto) {
    string limpio = "";

    
    for (int i = 0; i < texto.length(); i++) {
        char limpioChar = limpiarCaracter(texto[i]);
        if (limpioChar != '\0') {
            limpio += limpioChar;
        }
    }

    string reverso = limpio;
    reverse(reverso.begin(), reverso.end());

    return limpio == reverso;
}

int main() {
    string frase;
    cout << "Ingrese el texto: ";
    getline(cin, frase);

    if (esPalindromo(frase)) {
        cout << " Es un palindromo." << endl;
    } else {
        cout << " No es un palindromo." << endl;
    }

    return 0;
}
