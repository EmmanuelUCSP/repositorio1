
#include <iostream>
#include<iomanip>
#include <array>
#include <string>
#include <cstddef>

using namespace std;
void printArray(const array<int, 10>& source, int a, int b);
void primos();
int recursiveMaximum(int A[], int n);


int main()
{
    //INVERTIR ARREGLO DE MANERA ITERATIVA
    int valores;
    cout << "cuantos valos desea ingresar: " << endl;
    cin >> valores;
    cout << "Se invertira el arreglo" << endl;
    int arreglo1[5];
    int i;
    for (i = 1; i <= valores; i++)
    {
        cout << "Ingresa el valor: " << i << endl;
        cin >> arreglo1[i];
    }
    cout << "valores invertidos: " << endl;
    for (i = valores; i >= 1; i--)
    {
        cout << arreglo1[i] << endl;
    }
    
    //Recursivo


    //7.27
    primos();

    //7.30
    const array<int, 10> theSource = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int al = 0;
    int bl = theSource.size();

    printArray(theSource, al, bl);
    

    //7.32
    cout << "" << endl;
    int A[] = { 1, 4, 45, 6, -50, 10, 2 };
    int n = sizeof(A) / sizeof(A[0]);
    cout << "" << endl;
    cout << A[0] << " ";
    cout << A[1] << " ";
    cout << A[2] << " ";
    cout << A[3] << " ";
    cout << A[4] << " ";
    cout << A[5] << " ";
    cout << "" << endl;
    cout << "El maximo valor es: " << endl;
    cout << recursiveMaximum(A, n);
    return 0;

}

/*
//INVERTIR ARREGLOS DE FORMA RECURSIVA
void Recursivo(int arr[], int tam, int i = 0) {
    if (i >= tam)
        return;
    swap(arr[i], arr[tam - 1]);
    Recursivo(arr; tam - 1; i + 1);
}
*/




    //EJERCICIO 7.27
    //................

void primos() {
    cout << "" << endl;
    cout << "voy a mostrarte los numero primos" << endl;
    const int S = 1000;
    int arr[S];
    int c = 0;

    for (int k = 0; k < S; k++)
        arr[k] = 1;

    for (int i = 1; i < S; i++)
    {
        if (arr[i] == 1 && i != 1)
        {
            for (int j = i; j < S; j++)
            {
                if (j % i == 0 && j != i)
                    arr[j] = 0;
            }
        }
    }
    for (int a = 2; a < S; a++)
    {
        if (arr[a] == 1)
        {
            cout << setw(3) << a << " Es un numero primo" << endl;;
            c++;
        }
    }
    cout << "Fueron encontrados: " << c << " numeros primos" << endl;
    cout << "" << endl;
}


    //EJERCICIO 7.30
    //..............

void printArray(const array<int, 10>& source, int a, int b) 
{
    if (a < b) {
        cout << source[a] << " ";
        printArray(source, a + 1, b);
    }
}

    //EJERCICIO 7.32
    //..............

int recursiveMaximum(int A[], int n)
{
    // if n = 0 means whole array has been traversed 
    if (n == 1)
        return A[0];
    return max(A[n - 1], recursiveMaximum(A, n - 1));
}


