/* Escribir un bucle para validar lo ingresado por el usuario: se debe solicitar el ingreso de un carácter y sólo se debe
 interrumpir el bucle cuando el usuario haya ingresado el carácter 's' o el carácter 'n'. La solicitud de ingreso del
 dato debe hacerse al menos una vez antes de evaluar si el bucle debe interrumpirse o no. No utilizar "while true"
 como condición. A continuación, si el usuario ingresó la letra 's', imprimir "usted eligió SÍ" y, si ingresó la 'n'
 imprimir "usted eligió NO".
 Nota: para evaluar la condición de corte del bucle considerando mayúsculas y minúsculas es posible utilizar las
 funciones toupper(carácter) y tolower(carácter), que convierten el carácter pasado por parámetro a mayúscula
 o a minúscula respectivamente (si el carácter no es una letra, no se modifica).*/
#include <iostream>

using namespace std;

int main()
{
    char c;

    do
    {

        cout << "Ingrese 's' para SI o 'n' para NO. ";
        cin >> c;
        c = tolower(c);

        if (c=='s' || c=='n')
            {
            break;
            }
    }
    while(c != 's' || c != 'n');

    switch (c)
    {
    case 's' :
        cout<< "usted eligio SI"<<endl;
        break;
    case 'n':
        cout<< "usted eligio NO"<<endl;
        break;
    }
    return 0;
}
