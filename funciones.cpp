#include <iostream>
using namespace std;

// Las funciones se declaran antes del main
int suma(int x, int y)
{
    return x + y;
}
int resta (int x, int y)
{
    return x - y;
}
int multiplicacion (int x, int y)
{
    return x * y;
}
float division (float x, float y)
{
    return x / y;
}
int main()
{
    // se declaran las variables que quiero utilizar en el programa
    float a, b ; 
    int opc;
    // ingreso primer numero
    cout << "Ingrese numeros entero a= ";
    cin >> a;
    // ingreso de swgundo numero
    cout << "Ingrese numero entero b= ";
    cin >> b;

    cout << "Elija que opcion desea: \n\t1. Sumar \n\t2. Restar \n\t3. Multiplicacion \n\t4. Division \n\tOtro numero: Salir \n";
    cout << "Su opcion es: ";
    cin >> opc;

    switch (opc)
    {
    case 1: 
        cout << "El resultado de " << a << " + " << b << " es " << suma(a, b);
        break; 
    case 2 : 
        cout << "El resultado de " << a << " - " << b << " es " << resta (a , b) ;
        break;
    case 3: 
        cout << "El resultado de " << a << " * " << b << " es " << multiplicacion (a , b) ;
        break;
    case 4: 
        cout << "El resultado de " << a << " / " << b << " es " << division (a , b) ;
        break;

        break;

    default:
        cout << "No hice nada , salir ";
        break;
    }

    return 0;
}