#include<windows.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    system("color 0F");

    printf("HOLA MUNDO\n");

    // Secuencias de escape
    /*
    \n -> salto de línea
    \b -> retroceso
    \r -> retorno de carro
    \t -> tabulador
    */

    // Tipos de Datos                               Peso    N° de Valores   Rango
    /*
    int (Integer) -> Entero                         4 bytes     2^32        de -2'147'483,648 a 2'147'483,647
    char (Character) -> Caracter                    1 byte      256         de -128 a 127
    char [] (String) -> Cadena de caracteres
    string (String) -> Cadena de caracteres
    float (Float) -> Punto flotante                 4 bytes                 1.17e-38 a 3.40e38
    double (Double) -> Doble precisión              8 bytes                 2.22e-308 a 1.80e308
    bool (Boolean) -> Lógico                        1 byte                  Verdadero / Falso
    */

    // Declaración de Variables
    char quit = '\0';
    int i = 0;

    while (quit != 'q')
    {
        cout<<"Hello ! This is a console app." << endl;
        cout<<"To create a console, go to Project Options and select" << endl;
        cout<<"\'Win32 Console\'." << endl;
        cout<<"Press q to quit " << endl;
        cin>>quit;
        i++;
	}

    int n, j=0;
    cout<<"Escribe un numero: ";
    cin>>n;

    do
    {
        n = n/10;
        j++;
    }while(n > 0);

    cout<<j<<" numeros"<<endl;

	for (int i = 0; i <= 5; i++)
	{
		cout<<"HOLA MUNDO\n";
	}

	system("Pause");
	return 0;
}
