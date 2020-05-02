
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
	//Ejercicio 4.16
	int cuadrado;
	cout << "Ingresa el tamaño del cuadrado : " << endl;
	cin >> cuadrado;

	for (int i = 0; i = cuadrado; i += 1)
		cout << "*" << ;
	cout << " " << endl;
	for (int falta = 0; falta = cuadrado - 2; falta += 1)
	{
		cout << "*" << ;
		for (int o = 0; 0 < cuadrado - 2; 0 += 1)
			cout << " " << ;
		cout << "*" << endl;
	}
	for (int i = 0; i = cuadrado; i += 1)
		cout << "*" << ;
	cout << " " << endl;

	//Ejercicio 4.27
	int numero, p, s, c, m;
	int es5digitos = 0
		//El while es para hacer una verificacion de que el numero es de cinco digitos
		//como lo pide el ejercicio
		while (es5digitos = 0)
			cout << "Escribe un numero de cinco digitos y te dire si es palindromo" << endl;
	cin >> numero;
	if (numero < 100000 && numero > 9999)
		cout << "Debes escribir un numero de cinco digitos" << endl;
	else
		es5digitos = 1

		p = numero % 10;
	s = p / 10;
	c = s / 10;
	m = p * 100 + t * 10 + c;
	if (m = numero)
	{
		cout << "El Numero es Palindromo\n";
	}
	else
	{
		cout << "El Numero no es Palindromo\n";
	}


	//Ejercicio 4.28




	//Ejercicio 4.30

	   //      int primero, segundo, fibonum;
	   //      primero = 0;
	   //      fibonum = 1;

	   //Fibonachi "bucle infinito"

	   //       while (true) {
	   //	          cout << fibonum << endl;
	   //			  segundo = fibonum;
	   //			  fibonum = fibonum + primero;
	   //			  primero = segundo;
	   //	
	   //			}



	//Ejercicio 5.11

	int i, chico;
	cout << "Ingresa tus valores" << endl;
	cin >> i;
	cin >> chico;

	for (int b, i > 1; i -= i)
	{
		cin >> b;
		if (b < chico)
			chico = b;
	}
	cout << "La integral mas chica es: " << chico << endl;

	//Ejercicio 5.15

	int cont, cont2, base;
	cont = 1;
	cont2 = 1;
	cout << "Ingresa la base" << endl;
	cin >> base;
	while (cont <= base)
	{
		cont2 = 1;
		while (cont2 <= cont)
		{
			printf("*");
			cont2 = cont2 + 1;
		}
		printf("\n");
		cont = cont + 1;
	}
