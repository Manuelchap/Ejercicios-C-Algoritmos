#include <iostream>
#include <algorithm> 
using namespace std;

bool sonAnagramas(string palabra1, string palabra2) {
    if (palabra1 == palabra2) return false;
    if (palabra1.length() != palabra2.length()) return false;

    sort(palabra1.begin(), palabra1.end());
    sort(palabra2.begin(), palabra2.end());

    return palabra1 == palabra2;
}

int main() {
    string palabra1, palabra2;

    cout << "Escribe la primera palabra: ";
    cin >> palabra1;

    cout << "Escribe la segunda palabra: ";
    cin >> palabra2;

    if (sonAnagramas(palabra1, palabra2))
        cout << "? Son anagramas" << endl;
    else
        cout << "? No son anagramas" << endl;

    return 0;
}
