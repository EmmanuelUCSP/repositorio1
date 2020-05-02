
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//Informacion de las funciones existentes para usarlas en la funcion main

void CalculateCharges(int carro1, int carro2, int carro3);     //Ejercicio 6.12
int integerPower(int base55, int exponente55);                 //Ejercicio 6.18
bool Factorial(int resultado, int factorial77);                //Ejercicio 6.20
void CalFecha(int &segundosTotales, int &h, int  &m, int &s);  //Ejercicio 6.25
bool DetectaPrimos(int SupuestoPrimo);                         //Ejercicio 6.29    A)
int AlRevez();                                                 //Ejercicio 6.30
int PotenciaRecursiva(int base2, int exponente2);              //Ejercicio 6.36
void Fibonacci();                                              //Ejercicio 6.37
int MCD(int MayorNumero, int MenorNumero);                     //Ejercicio 6.41



int main()
{
	//Ejercicio 4.26:

	int tamcuadrado;
	cout << "Ingresa un numero y hare un cuadrado de * (//Ejercicio 4.26)" << endl;
	cin >> tamcuadrado;
	//primera linea del cuadrado
	for (int z = 0; z < tamcuadrado; z = z + 1)
		cout << "*";
	cout << "" << endl;
	//hueco en el cuadrado
	for (int z = 0; z < tamcuadrado - 2; z = z + 1)
	{
		cout << "*";
		for (int z = 0; z < tamcuadrado - 2; z = z + 1)
			cout << " ";
		cout << "*" << endl;
	}
	//ultima linea del cuadrado
	for (int z = 0; z < tamcuadrado; z = z + 1)
		cout << "*";
	cout << "" << endl;
	cout << "" << endl;






	//Ejercicio 4.27:

	int numero, p, s, c, m;
	int es5digitos = 0;
	//El while es para hacer una verificacion de que el numero es de cinco digitos
	while (es5digitos == 0)
	{
		cout << "Escribe un numero de cinco digitos y te dire si es palindromo (//Ejercicio 4.27)" << endl;
		cin >> numero;
		if (numero > 100000)
			cout << "Debes escribir un numero de cinco digitos" << endl;
		else if (numero > 100000)
			cout << "Debes escribir un numero de cinco digitos" << endl;
		else
			es5digitos = 1;
	}

	p = numero % 10;
	s = p / 10;
	c = s / 10;
	m = p * 100 + s * 10 + c;
	if (m = numero)
	{
		cout << "El Numero es Palindromo\n";
	}
	else
	{
		cout << "El Numero no es Palindromo\n";
	}
	cout << "" << endl;





	//Ejercicio 4.28

	cout << "Ingrese un numero entero positivo y lo convertire a numero binario (//Ejercicio 4.28)" << endl;
	int NumeroPositivo;
	string Binario = "";
	cin >> NumeroPositivo;
	if (NumeroPositivo > 0)
	{
		while (NumeroPositivo > 0)
		{
			if (NumeroPositivo % 2 == 0)
				Binario = "0" + Binario;
			else
				Binario = "1" + Binario;
			NumeroPositivo = (int)NumeroPositivo / 2;
		}
	}
	else if (NumeroPositivo == 0)
	{
		Binario = "0";
	}
	else
		Binario = "No se puede realizar la conversion. Ingresa datos positivos";
		cout << "El resultado de la converison es: " << Binario << endl;
		cout << "" << endl;






	//Ejercicio 4.30

		cout << "El ejercicio 4.30 pretende que hagamos un bucle infinito" << endl;
		cout << "Este esta escrito como comentario en la linea 117" << endl;

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

	int chico1, chico;
	cout << "Ingresa tus valores y te dire cual es el mas chico (//Ejercicio 5.11)" << endl;
	cin >> chico1;
	cin >> chico;

	cout << "" << endl;
	if (chico1 < chico)
		cout << chico1 << "  Es el mas chico" << endl;
	else
		cout << chico << "  Es el mas chico " << endl;
	cout << "" << endl;





	//Ejercicio 5.15

	int cont, cont2, base;
	cont = 1;
	cont2 = 1;
	cout << "Ingresa la base (Hare un piramide de *  (//Ejercicio 5.15))" << endl;
	cin >> base;
	cout << "" << endl;
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
	cout << "" << endl;


	//Ejercicio 5.19

	int ii;
	double pp = 0;
	for (ii = 1; ii <= 100; ii++)
		if (ii % 2 == 0) {
			pp = pp - (4.0 / (2 * ii - 1));
		}
		else {
			pp = pp + (4.0 / (2 * ii - 1));
		}
	cout << "(//Ejercicio 5.19)" << endl;
	cout << "Valor de PI : " << endl;
	cout << pp << endl;
	cout << "" << endl;

	//Invocacion de los siguientes Ejercicios ya que estan en funciones
	//
	//

	cout << "(Ejercicio 6.12)" << endl;                                      //Ejercicio 6.12
	cout << "" << endl;	                                                     //
	int carro1, carro2, carro3;                                              //
	cout << "Ingresa el numero de horas en el garaje" << endl;               //
	cout << "Carro 1 : " << endl;                                            //
	cin >> carro1;                                                           //
	cout << "Carro 2 : " << endl;                                            //
	cin >> carro2;                                                           //
	cout << "Carro 3 : " << endl;                                            //
	cin >> carro3;                                                           //
	CalculateCharges(carro1, carro2, carro3);                                //




	int basePower, exponentePower;          
	cout << "(//EJERCICIO 6.18)" << endl;                                                             //Ejercicio 6.18
	cout << "Dimer una base y un exponete y te mostrare la operacion en multiplicacion" << endl;      //
	cin >> basePower;                                                                                 //
	cin >> exponentePower;                                                                            //
	integerPower(basePower, exponentePower);                                                          //
	cout << "" << endl;                                                                               //


	cout << "(//Ejercicio 6.20)" << endl;                                              //Ejercicio 6.20
	cout << "Dime dos numeros y te dire si el segundo es factor del primero" << endl;  //
	int resultadoFac, facFacto;                                                        //
	cin >> resultadoFac;                                                               //
	cin >> facFacto;                                                                   //
	Factorial(resultadoFac, facFacto);                                                 //
	cout << "" << endl;                                                                //


	cout << "(Ejercicio 6.25)" << endl;          //Ejercicio 6.25
	cout << "linea de codigo 372" << endl;       //

	cout << "(//Ejercicio 6.29)" << endl;                                //Ejercicio 6.29
	cout << "Escribe un numero y te dire si es primo: " << endl;         //
	int NumPrimo;                                                        //
	cin >> NumPrimo;                                                     //
	DetectaPrimos(NumPrimo);                                             //
	cout << "" << endl;                                                  //



	cout << "(Ejercicio 6.30)" << endl;                                 //Ejercicio 6.30
    AlRevez();                                                          //
	cout << "" << endl;                                                 //



	cout << "" << endl;
	cout << "(Ejercicio 6.36)" << endl;                                  //Ejercicio 6.36
	cout << "El codigo de potecia recursiva (linea 454)" << endl;        //
	cout << "" << endl;                                                  //


	cout << "Ejercicio 6.37" << endl;                                          //Ejercicio 6.37
	cout << "Secuencia de fibonacci de forma iterativa" << endl;               //
	Fibonacci();                                                               //



	cout << "" << endl;                                                //Ejercicio 6.41
	cout << "(Ejercicio 6.41)" << endl;                                //
	cout << "Dimer 2 numero y te dire su MCD" << endl;                 //
	int PrimeroNum, SegundoNum;                                        //
	cin >> PrimeroNum;                                                 //
	cin >> SegundoNum;                                                 //
	MCD(PrimeroNum, SegundoNum);                                       //

}

	//Ejercicio 6.12


void CalculateCharges(int carro1, int carro2, int carro3)
{

	int pago1 = 2000;
	int pago2 = 2000;
	int pago3 = 2000;
	cout << "Carro    Horas     Paga" << endl;

	//carro 1..............
	if (carro1 > 4) {
		cout << "     1      " << carro1 << "       20.00" << endl;
	}
	else if (carro1 < 4 && carro1 > 24)
	{
		pago1 = pago1 + 500;
		for (int hora = 4; hora < carro1; hora = hora + 4)
			pago1 = pago1 + 500;
		cout << "     1      " << carro1 << "       " << pago1 << endl;
	}
	else
		cout << "     1      " << carro1 << "       50.00" << endl;

	//Carro 2...................
	if (carro2 > 4)
		cout << "2      " << carro2 << "       20.00" << endl;
	else if (carro2 < 4 && carro2 > 24)
	{
	pago2 = pago2 + 500;
	for (int hora = 4; hora < carro2; hora = hora + 4)
		pago2 = pago2 + 500;
		cout << "2      " << carro2 << "       " << pago2 << endl;
	}
	else
		cout << "2      " << carro2 << "       50.00" << endl;

	//Carro 3.......................
	if (carro3 > 4)
		cout << "3      " << carro3 << "       20.00" << endl;
	else if (carro3 < 4 && carro3 > 24)
	{
		pago3 = pago3 + 500;
		for (int hora = 4; hora < carro3; hora = hora + 4)
			pago3 = pago3 + 500;
		cout << "3      " << carro3 << "       " << pago3 << endl;
	}
	else
		cout << "3      " << carro3 << "       50.00" << endl;
}




//EJERCICIO 6.18

int integerPower(int base55, int exponente55)
{
	cout << base55 ;
	int resultadoPower = base55;
	for (int contador = 1; contador < exponente55; contador += 1)
	{
		cout << " * " << base55;
		resultadoPower = resultadoPower * base55;
	}
	cout << "" << endl;
	return base55;

}

//EJERCICIO 6.20

bool Factorial(int resultado, int factorial77)
{
	int auxiliar = 1;
	while (auxiliar < factorial77)
	{
		factorial77 = factorial77 * auxiliar;
		auxiliar += 1;
	}
	if (factorial77 == resultado) 
	{
		cout << "El segundo numero es factor del primero" << endl;
		return true;
	}
	else
	{
		cout << "El segundo numero no es factor del primero" << endl;
		return false;
	}
}






//Ejercicio 6.25

void CalFecha(int &segundosTotales, int &h, int &m, int &s)
{
	cout << "Calculando :D " << endl;
	h = (segundosTotales / 3600);
	m = (segundosTotales - (3600 * h)) / 60;
	s = (segundosTotales - (3600 * h) - (m * 60));
	cout << "H:M.S" << h, m, s;
	cout << "" << endl;
	 
}





//Ejercicio 6.29


//a)
bool DetectaPrimos(int SupuestoPrimo)
{
	bool esPrimo = true;

	for (int i = 2; i <= SupuestoPrimo / 2; ++i)
	{
		if (SupuestoPrimo % i == 0)
		{
			esPrimo = false;
			break;
		}
	}
	if (esPrimo)
	{
		cout << SupuestoPrimo << ": Este numero es primo" << endl;
		return true;
	}
	else
	{
		cout << SupuestoPrimo << ": Este numero no es primo" << endl;
		return false;
	}
}

//b)
void PrimoHastaEl10000()
{
	int Corredor = 3;
	while (Corredor > 9999)
	{
		DetectaPrimos(Corredor);
		Corredor += 2;
	}
}

//c)
bool DetectaPrimosV2(int& SupuestoPrimo)
{
	bool esPrimo = true;

	cout << "Ingresa un entero positivo" << endl;
	cin >> SupuestoPrimo;

	for (int i = 2; i <= sqrt(SupuestoPrimo); ++i)
	{
		if (SupuestoPrimo % i == 0)
		{
			esPrimo = false;
			break;
		}
	}
	if (esPrimo){
		cout << SupuestoPrimo << "Este numero es primo" << endl;
		return true;
	}
	else{
		cout << SupuestoPrimo << "Este numero no es primo" << endl;
		return false;
	}
}






//Ejercicio 6.30

int AlRevez()
{
	int NumeroCambia, NumeroRevez = 0, auxiliar55;

	cout << "Ingresa un numero y te lo mostrare al revez: ";
	cin >> NumeroCambia;

	while (NumeroCambia != 0)
	{
		auxiliar55 = NumeroCambia % 10;
		NumeroRevez = NumeroRevez * 10 + auxiliar55;
		NumeroCambia /= 10;
	}

	cout << "El numero al revez es:  " << NumeroRevez;
	return NumeroRevez;
}






//Ejercicio 6.36

int PotenciaRecursiva(int base2, int exponente2)
{
	if (exponente2 == 1)
		return 1;
	else 
		return base2 * PotenciaRecursiva(base2, exponente2 - 1);
	
}





//Ejercicio 6.37

void Fibonacci()
{
	int numeroEnUso = 1;
	int numeroAnterior = 0;
	int auxiliar77;
	for (int i = 0; i < 20; i++)
	{
		cout << numeroEnUso << endl;
	    auxiliar77 = numeroEnUso;
		numeroEnUso = numeroEnUso + numeroAnterior;
		numeroAnterior = auxiliar77;
	}
}





//Ejercicio 6.39

//No pude resolver el problema de las torres de hanoi de forma iterativa
//    :c



//Ejercicio 6.41

int MCD(int MayorNumero, int MenorNumero)
{
	int resultado = 1;
	for (int i = 1; i < MayorNumero; i += 1) 
	{
		if ((MayorNumero % i == 0) && (MenorNumero % i == 0))
			resultado = i;
	}
	cout << "El MCD es : " << resultado << endl;
	return resultado;

}
