#include <iostream>
#include <string>

using namespace std;

int invertir (int numero = 0)  //funcion invertir
{
    int y = 0;
    while(numero != 0)
    {
        y = y*10 + numero % 10;
        numero = numero / 10;
    }
    return y;
}

int sumarDigitos (int digitos) //funcion sumar digitos
{
    string digitosStr = to_string(digitos); //convertir el numero en una cadena de caracteres
    int cantDigitos = digitosStr.length(); //contar la cantidad de digitos
    return cantDigitos;
}

int multiplos (int a, int b)  // funcion multiplos
{
    if (a == 0 || a >= b)              // tomar como valido el cero o dividir solo si el dividendo es mayor o igual al divisor
    {
        if (a % b == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

int main()
{
    char opcion,D;
    int z = 0;
    int numeroDigitos;
    int multiplo1 = 0;
    int multiplo2 = 0;

    do
    {
        cout << "Elija la opcion que desee: " << endl;   //MENÚ
        cout << "'A': Invertir numero" << endl;
        cout << "'B': Sumatoria de digitos." << endl;
        cout << "'C': Decir si son multiplos." << endl;
        cout << "'D': Salir " << endl;
        cin >> opcion;
        opcion = toupper(opcion);

            switch(opcion)
            {
            case 'A':
                cout << "Usted eligio la opcion 'A'" << endl;
                cout<< "ingrese un numero: ";
                cin >> z;
                cout<<"el numero invertido es "<< invertir (z) << endl; //invoco a la función INVERTIR
                break;
            case 'B':
                cout << "Usted eligio la opcion 'B'" << endl;
                cout<< "ingrese un numero para saber la cantidad de digitos que posee." << endl;
                cin >> numeroDigitos;
                cout << "la sumatoria de digitos es de: "<< sumarDigitos(numeroDigitos) << endl; //invoco la funcion sumarDigitos
                break;
            case 'C':
                cout << "Usted eligio la opcion 'C'" << endl;
                cout << "Ingrese un numero: "<<endl;
                cin >> multiplo1;
                cout << "ingrese otro numero:" << endl;
                cin >> multiplo2;
                if (multiplos (multiplo1,multiplo2) == true) //invoco la funcion multiplos
                {
                    cout << multiplo1 << " es multiplo de " << multiplo2 << endl;
                }
                else
                {
                    cout << multiplo1 << " no es multiplo de " << multiplo2 << endl;
                }
                break;
            case 'D':
                    cout << "Usted eligio la opcion 'D'. Pulse ENTER para salir del programa."<< endl;
                break;
            default: cout << "OPCION INCORRECTA"<< endl;
            }
    }
    while (opcion != 'D');
    return 0;
}
