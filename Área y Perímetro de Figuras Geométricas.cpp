// Área y Perímetro de Figuras Geométricas
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <iostream>
using namespace std;

void OperacionesCirculo(float radio, float PI);
void OperacionesCuadrado(float lado);
void OperacionesTriangulo(float base, float altura);

main()
{
	setlocale(LC_ALL, ""); // Aceptar acentos

	int opcion;
	const float PI = 3.1416;
	float radio, lado, base, altura;

	printf(".: MENÚ :.\n");
	printf("Selecciona una Figura Geométrica\n");
	cout << "1.- Círculo" << endl;
	cout << "2.- Cuadrado" << endl;
	cout << "3.- Triángulo" << endl;
	printf("Selecciona una opción: ");
	scanf("%d", &opcion);

	switch(opcion)
	{
		case 1:	printf("Ingresa el radio: ");
				scanf("%f", &radio);
				OperacionesCirculo(radio, PI);
				break;
		case 2: cout << "Ingresa el lado: ";
				cin >> lado;
				OperacionesCuadrado(lado);
				break;
        case 3: printf("Ingresa la base: ");
				scanf("%f", &lado);
				cout << "Ingresa la altura: ";
				cin >> altura;
				OperacionesCuadrado(lado);
				break;
		default:
                cout << "Opción no válida" << endl;
                break;
	}

	system("Pause");
	// getchar();
}

void OperacionesCirculo(float radio, float PI)
{
    printf("CÍRCULO\n");
	printf("El Perímetro es = %f u\n", 2 * PI * radio);
	cout << "El Área es = " << PI * pow(radio, 2) << " u2" << endl;
}

void OperacionesCuadrado(float lado)
{
    printf("CUADRADO\n");
    printf("El Perímetro es = %f u\n", 4 * lado);
    cout << "El Área es = " << lado * lado << " u2" << endl;
}

void OperacionesTriangulo(float base, float altura)
{
    printf("TRIÁNGULO\n");
    printf("El Perímetro es = %f u\n", 3 * base);
    cout << "El Área es = " << (base * altura) / 2 << " u2" << endl;
}
