#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena;

    cout << "Ingrese una cadena: " << endl;
    getline (cin, cadena);

 int longitud = cadena.length();

    cout << "Cadena en orden inverso: " << endl;
    for (int i = longitud - 1; i >= 0; i--) {
        cout << cadena[i];
    }

    cout << endl;
    return 0;
}







