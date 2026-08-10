// Área y Perímetro de Figuras Geométricas
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>     // SetLocale en C
#include <clocale>      // SetLocale en C++
#include <iostream>
using namespace std;

void OperacionesCirculo(float radio, float PI);
void OperacionesCuadrado(float lado);
void OperacionesTriangulo(float base, float altura);

main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
	// setlocale(LC_ALL, ""); // Aceptar acentos

	int opcion;
	const float PI = 3.1416;
	float radio, lado, base, altura;
	string respuesta = "si";

	while(respuesta == "SI" || respuesta == "Si" || respuesta == "si" || respuesta == "S" || respuesta == "s" || respuesta == "yes" || respuesta == "Y" || respuesta == "y")
    {
        system("cls"); // Limpiar Pantalla (Clear Screen)

        printf(".: MENÚ :.\n");
        printf("Área y Perímetro de Figuras Geométricas\n");
        cout << "1.- Círculo" << endl;
        cout << "2.- Cuadrado" << endl;
        cout << "3.- Triángulo" << endl;
        printf("Selecciona una opción: ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1: printf("\n****************************\n");
            		printf("CÍRCULO\n");
					printf("Ingresa el radio: ");
                    scanf("%f", &radio);
                    OperacionesCirculo(radio, PI);
                    cout << "\n****************************\n";
                    break;
            case 2: printf("\n****************************\n");
            		printf("CUADRADO\n");
					cout << "Ingresa el lado: ";
                    cin >> lado;
                    OperacionesCuadrado(lado);
                    cout << "\n****************************\n";
                    break;
            case 3: printf("\n****************************\n");
            		printf("TRIÁNGULO\n");
					printf("Ingresa la base: ");
                    scanf("%f", &lado);
                    cout << "Ingresa la altura: ";
                    cin >> altura;
                    OperacionesTriangulo(lado, altura);
                    cout << "\n****************************\n";
                    break;
            default:
                    cout << "Opción no válida" << endl;
                    break;
        }

        cout << "\n¿Quieres continuar?(si/no): ";
        cin >> respuesta;
    }

	system("Pause"); // getchar();
}

void OperacionesCirculo(float radio, float PI)
{
	printf("El Perímetro es = %f u\n", 2 * PI * radio);
	cout << "El Área es = " << PI * pow(radio, 2) << " u2" << endl;
}

void OperacionesCuadrado(float lado)
{
    printf("El Perímetro es = %f u\n", 4 * lado);
    cout << "El Área es = " << lado * lado << " u2" << endl;
}

void OperacionesTriangulo(float base, float altura)
{
    printf("El Perímetro es = %f u\n", 3 * base);
    cout << "El Área es = " << (base * altura) / 2 << " u2" << endl;
}
