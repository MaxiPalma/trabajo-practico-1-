#include <iostream>

using namespace std;
int invertir (int numero = 0){
    int y = 0;
    while(numero != 0){
        y = y*10 + numero % 10;
        numero = numero / 10;
    }
    return y;
}
int main()
{
    int a = 0;
    cout<< "ingrese un numero: ";
    cin >> a;
    cout<<"el numero invertido es "<< invertir (a) << endl; //invoco a la función INVERTIR

    return 0;
}
