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

     // a)   
    cout << "VX " << "YZ n";
    // b) 
    cout << "V" << "X " << "Y" << "Zn";
    // c)   
    cout << "VX ";
    cout << "YZn";

    //Ejercicio 2.18:
    int variable1, variable2;

    cout << "Ingresa un numero: ";
    cin >> variable1;
    cout << "Ingresa otro numero: ";
    cin >> variable2;

    if (variable1 > variable2)
        cout << "Es el mayor" << variable1 << endl;
    if (variable1 < variable2)
        cout << "Es el mayor" << variable2 << endl;
    else {
        cout << "Los numeros son iguales" << endl;
    }

    //Ejercicio 2.19
    int primer, segundo, tercer;

    cout << "Ingresa un primer numero: ";
    cin >> primer;
    cout << "Ingresa un segundo numero: ";
    cin >> segundo;
    cout << "Ingresa un tercer numero: ";
    cin >> tercer;

    int sumatotal = primer + segundo + tercer;
    int promedio = sumatotal / 3;
    int restatotal = primer - segundo - tercer;
    if (primer > segundo) {
        if (primer > tercer) {
            cout << "Es el numero mas grande" << primer << endl;
            if (segundo > tercer) {
                cout << "Es el numero mas chico" << tercer << endl;
            }
            else {
                cout << "Es el numero mas chico" << segundo << endl;
            }
        }
        else {
            cout << "Es el numero mas grande" << tercer << endl;
            cout << "Es el numero mas chico" << segundo << endl;
        }
    }
    if (segundo > tercer) {
        cout << "Es el numero mas grande" << segundo << endl;
        if (primer > tercer) {
            cout << "Es el numero mas chico" << tercer << endl;
        }
    }
    else {
        cout << "Es el numero mas grande" << tercer << endl;
        cout << "Es el numero mas chico" << primer << endl;
    }

    //Ejercicio 


   //2.27

    char letra;
    cout << "Enter un caracter: n";
    cin >> letra; letra
    cout << "Al caracter" << letra << "' le corresponde el entero " << endl;
    cout << static_cast<int>(letra) << endl;
    
    //Ejercicio 2.28

    int numero - 0, millar, 0, centena, 0, decena, 0};
    cout << "Enter un numero de 4 digitos: n";
    cin >> numero;
    millar á numero / 1000;
    numero % 1000;
    centena - numero / 100;
    numero % 100;
    decena - numero / 10;
    numero % 10;
    cout << numero << "  ";
    cout << decena << "  ";
    cout << centena << "  ";
    cout << millar << endl;

    //Ejercicio 2.29

    int longitud0};
    cout << " Longitud de la  caraátSuperficie áreaá tVolumen n.ndel cubo (cm) átde cubo (cm-2) átde cubo (cm-3) n";
    cout << longitud << "át-t" << 6 * longitud * longitud << "át-t" << longitud * longitud * longitud << endl;
    longitud 1;
    cout << longitud << "át-t" << 6 * longitud * longitud << "át-t" << longitud * longitud * longitud << endl;
    longitud 2;
    cout << longitud << "át-t" << 6 * longitud * longitud << "át-t" << longitud * longitud * longitud << endl;
    longitud 3;
    cout << longitud << "át-t" << 6 * longitud * longitud << "át-t" << longitud * longitud * longitud << endl;
    longitud 4;
    cout << longitud << "át-t" << 6 * longitud * longitud << "át-t" << longitud * longitud * longitud << endl;


        return 0
    }