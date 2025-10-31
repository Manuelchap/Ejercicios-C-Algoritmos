#include <iostream>
using namespace std;

int main() {
    int dias, anos = 0, meses = 0, semanas = 0;

    cout << "Ingrese el numero de dias: "; 
    cin >> dias;

    while (dias >= 365) {
        anos++;
        dias -= 365;
    }

    while (dias >= 30) {
        meses++;
        dias -= 30;
    }

    while (dias >= 7) {
        semanas++;
        dias -= 7;
    }

    cout << "Equivale a: " << anos << " años, " << meses << " meses, "
         << semanas << " semanas y " << dias << " días." << endl;

    return 0;
}
