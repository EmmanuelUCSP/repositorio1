// HolaMundo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    //Ejercicio 2.16
    int x, y;

    cout << "Ingresa el valor de x: ";
    cin >> x;
    cout << "Ingresa el valor de y: ";
    cin >> y;
    int suma = x + y;
    int resta = x - y;
    int multi = x * y;
    int cosciente = x / y;

    cout << "El resultado de x + y es: " << suma << std::endl;
    cout << "El resultado de x - y es: " << resta << std::endl;
    cout << "El resultado de x multiplicado por y es: " << multi << std::endl;
    cout << "El resultado de x / y es: " << cosciente << std::endl;

    //Ejercicio 2.17

    //Ejercicio 2.18:
    int variable1, variable2;

    cout << "Ingresa un número: ";
    cin >> variable1;
    cout << "Ingresa otro número: ";
    cin >> variable2;

    if (variable1 > variable2)
        cout << "Es el mayor" << variable1 << endl;
    if (variable1 < variable2)
        cout << "Es el mayor" << variable2 << endl;
    else {
        cout << "Los números son iguales" << endl;
    }

    //Ejercicio 2.19
    int primer, segundo, tercer;

    cout << "Ingresa un primer número: ";
    cin >> primer;
    cout << "Ingresa un segundo número: ";
    cin >> segundo;
    cout << "Ingresa un tercer número: ";
    cin >> tercer;

    int sumatotal = primer + segundo + tercer;
    int promedio = sumatotal / 3;
    int restatotal = primer - segundo - tercer;
    if (primer > segundo) {
        if (primer > tercer) {
            cout << "Es el numero mas grande" << primer << endl;
            if (segundo > tercer) {
                cout << "Es el número mas pequeño" << tercer << endl;
            }
            else {
                cout << "Es el número mas pequeño" << segundo << endl;
            }
        }
        else {
            cout << "Es el numero mas grande" << tercer << endl;
            cout << "Es el número mas pequeño" << segundo <<endl;
        }
    }
    if (segundo > tercer) {
        cout << "Es el número mas grande" << segundo << endl;
        if (primer > tercer) {
            cout << "Es el número mas pequeño" << tercer << endl;
        }
    }
    else {
        cout << "Es el número mas grande" << tercer <<endl;
        cout << "Es el número mas pequeño" << primer << endl;
    }

    //Ejercicio 


   

    return 0;
}
