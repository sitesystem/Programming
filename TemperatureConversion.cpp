// Conversi�n de Grados de Temperatura
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>     // SetLocale en C
#include <clocale>      // SetLocale en C++
#include <iostream>
using namespace std;

void CelsiusToFahrenheit(float grados_Celsius);
void CelsiusToKelvin(float grados_Celsius);
void FahrenheitToCelsius(float grados_Fahrenheit);
void FahrenheitToKelvin(float grados_Fahrenheit);
void KelvinToCelsius(float grados_Kelvin);
void KelvinToFahrenheit(float grados_Kelvin);

int main()
{
    SetConsoleOutputCP(CP_UTF8);
	// setlocale(LC_ALL, ""); // Aceptar acentos

	int opcion;
	float grados;
	string respuesta = "si";

	while(respuesta == "SI" || respuesta == "Si" || respuesta == "si" || respuesta == "S" || respuesta == "s" || respuesta == "yes" || respuesta == "Y" || respuesta == "y")
    {
        system("cls"); // Limpiar Pantalla (Clear Screen)

        printf(".: MENÚ :.\n");
        printf("Conversión de Grados de Temperatura\n");
        cout << "1.- °Centígrados a °Fahrenheit" << endl;
        cout << "2.- °Centígrados a °Kelvin" << endl;
        cout << "3.- °Fahrenheit a °Centígrados" << endl;
        cout << "4.- °Fahrenheit a °Kelvin" << endl;
        cout << "5.- °Kelvin a °Centígrados" << endl;
        cout << "6.- °Kelvin a °Fahrenheit" << endl;
        cout << "7.- Todas las Conversiones" << endl;
        printf("\nSelecciona una opción: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 7)
        {
            cout << "Ingresa los grados de temperatura: ";
            cin >> grados;
        }

        switch(opcion)
        {
            case 1: printf("\n**************************************\n");
                    CelsiusToFahrenheit(grados);
                    cout << "**************************************\n";
                    break;
            case 2: printf("\n**************************************\n");
                    CelsiusToKelvin(grados);
                    cout << "**************************************\n";
                    break;
            case 3: printf("\n**************************************\n");
                    FahrenheitToCelsius(grados);
                    cout << "**************************************\n";
                    break;
            case 4: printf("\n**************************************\n");
                    FahrenheitToKelvin(grados);
                    cout << "**************************************\n";
                    break;
            case 5: printf("\n**************************************\n");
                    KelvinToCelsius(grados);
                    cout << "**************************************\n";
                    break;
            case 6: printf("\n**************************************\n");
                    KelvinToFahrenheit(grados);
                    cout << "**************************************\n";
                    break;
            case 7: printf("\n**************************************\n");
                    CelsiusToFahrenheit(grados);
                    CelsiusToKelvin(grados);
                    FahrenheitToCelsius(grados);
                    FahrenheitToKelvin(grados);
                    KelvinToCelsius(grados);
                    KelvinToFahrenheit(grados);
                    cout << "**************************************\n";
                    break;
            default:
                    cout << "Opción no válida" << endl;
                    break;
        }

        cout << "\n¿Quieres continuar?(si/no): ";
        cin >> respuesta;
    }

	system("Pause"); // getchar();
    return 0;
}

void CelsiusToFahrenheit(float grados_Celsius)
{
    float grados_Fahrenheit = ((9 * grados_Celsius) / 5) + 32;
    printf("%.2f °Centígrados = %.2f °Fahrenheit\n", grados_Celsius, grados_Fahrenheit);
}

void CelsiusToKelvin(float grados_Celsius)
{
    float grados_Kelvin = grados_Celsius + 273.15;
    printf("%.2f °Centígrados = %.2f °Kelvin\n", grados_Celsius, grados_Kelvin);
}

void FahrenheitToCelsius(float grados_Fahrenheit)
{
    float grados_Celsius = 5 * (grados_Fahrenheit - 32) / 9;
    printf("%.2f °Fahrenheit = %.2f °Centígrados\n", grados_Fahrenheit, grados_Celsius);
}

void FahrenheitToKelvin(float grados_Fahrenheit)
{
    float grados_Kelvin = (5 * (grados_Fahrenheit - 32) / 9) + 273.15;
    printf("%.2f °Fahrenheit = %.2f °Kelvin\n", grados_Fahrenheit, grados_Kelvin);
}

void KelvinToCelsius(float grados_Kelvin)
{
	float grados_Celsius = grados_Kelvin - 273.15;
    printf("%.2f °Kelvin = %.2f °Centígrados\n", grados_Kelvin, grados_Celsius);
}
void KelvinToFahrenheit(float grados_Kelvin)
{
	float grados_Fahrenheit = (9 * (grados_Kelvin - 273.15) / 5) + 32;
    printf("%.2f °Kelvin = %.2f °Fahrenheit\n", grados_Kelvin, grados_Fahrenheit);
}
