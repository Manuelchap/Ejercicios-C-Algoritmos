#include <iostream>
using namespace std;


int calcularMCD(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int calcularMCM(int a, int b) {
    int mcd = calcularMCD(a, b);
    return (a * b) / mcd;
}

int main() {
    int num1, num2;

    cout << "Ingrese el primer numero: "; 
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    int mcd = calcularMCD(num1, num2);
    int mcm = calcularMCM(num1, num2);

    cout << " MCD: " << mcd << endl;
    cout << " MCM: " << mcm << endl;

    return 0;
}
