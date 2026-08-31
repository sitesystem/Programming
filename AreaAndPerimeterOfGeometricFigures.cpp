// Área y perímetro de figuras geométricas
#include <stdio.h>
#include <string.h>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <cmath>
#include <locale.h>     // SetLocale en C
#include <clocale>      // SetLocale en C++
#include <iostream>
#include <iomanip>

#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

const double PI = 3.14159265358979323846;

void OperacionesCirculo(double radio);
void OperacionesCuadrado(double lado);
void OperacionesTriangulo(double ladoA, double ladoB, double ladoC);
void OperacionesRectangulo(double base, double altura);
void OperacionesRombo(double lado, double diagonalMayor, double diagonalMenor);
void OperacionesTrapecio(double baseMayor, double baseMenor, double ladoA,
                         double ladoB, double altura);
void OperacionesPoligonoRegular(int numeroLados, double lado);
bool MedidaPositiva(double medida);

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif

    int opcion;
    string respuesta = "si";

    cout << fixed << setprecision(2);

    while (respuesta == "SI" || respuesta == "Si" || respuesta == "si" ||
           respuesta == "S" || respuesta == "s" || respuesta == "yes" ||
           respuesta == "Y" || respuesta == "y")
    {
        cout << ".: MENÚ :.\n";
        cout << "Área y perímetro de figuras geométricas\n";
        cout << "1.- Círculo\n";
        cout << "2.- Cuadrado\n";
        cout << "3.- Triángulo\n";
        cout << "4.- Rectángulo\n";
        cout << "5.- Rombo\n";
        cout << "6.- Trapecio\n";
        cout << "7.- Polígono regular\n";
        cout << "Selecciona una opción: ";
        cin >> opcion;

        cout << "\n****************************\n";

        switch (opcion)
        {
            case 1:
            {
                double radio;
                cout << "CÍRCULO\nIngresa el radio: ";
                cin >> radio;
                OperacionesCirculo(radio);
                break;
            }
            case 2:
            {
                double lado;
                cout << "CUADRADO\nIngresa el lado: ";
                cin >> lado;
                OperacionesCuadrado(lado);
                break;
            }
            case 3:
            {
                double ladoA, ladoB, ladoC;
                cout << "TRIÁNGULO\nIngresa el primer lado: ";
                cin >> ladoA;
                cout << "Ingresa el segundo lado: ";
                cin >> ladoB;
                cout << "Ingresa el tercer lado: ";
                cin >> ladoC;
                OperacionesTriangulo(ladoA, ladoB, ladoC);
                break;
            }
            case 4:
            {
                double base, altura;
                cout << "RECTÁNGULO\nIngresa la base: ";
                cin >> base;
                cout << "Ingresa la altura: ";
                cin >> altura;
                OperacionesRectangulo(base, altura);
                break;
            }
            case 5:
            {
                double lado, diagonalMayor, diagonalMenor;
                cout << "ROMBO\nIngresa el lado: ";
                cin >> lado;
                cout << "Ingresa la diagonal mayor: ";
                cin >> diagonalMayor;
                cout << "Ingresa la diagonal menor: ";
                cin >> diagonalMenor;
                OperacionesRombo(lado, diagonalMayor, diagonalMenor);
                break;
            }
            case 6:
            {
                double baseMayor, baseMenor, ladoA, ladoB, altura;
                cout << "TRAPECIO\nIngresa la base mayor: ";
                cin >> baseMayor;
                cout << "Ingresa la base menor: ";
                cin >> baseMenor;
                cout << "Ingresa el primer lado no paralelo: ";
                cin >> ladoA;
                cout << "Ingresa el segundo lado no paralelo: ";
                cin >> ladoB;
                cout << "Ingresa la altura: ";
                cin >> altura;
                OperacionesTrapecio(baseMayor, baseMenor, ladoA, ladoB, altura);
                break;
            }
            case 7:
            {
                int numeroLados;
                double lado;
                cout << "POLÍGONO REGULAR\nIngresa el número de lados: ";
                cin >> numeroLados;
                cout << "Ingresa la longitud de cada lado: ";
                cin >> lado;
                OperacionesPoligonoRegular(numeroLados, lado);
                break;
            }
            default:
                cout << "Opción no válida.\n";
                break;
        }

        cout << "****************************\n";
        cout << "\n¿Quieres continuar? (si/no): ";
        cin >> respuesta;
    }

    system("pause");    // Pase a getchar() si no funciona en tu sistema
    return 0;
}

bool MedidaPositiva(double medida)
{
    if (medida <= 0)
    {
        cout << "Error: todas las medidas deben ser mayores que cero.\n";
        return false;
    }
    return true;
}

void OperacionesCirculo(double radio)
{
    if (!MedidaPositiva(radio)) return;

    cout << "Diámetro = " << 2 * radio << " u\n";
    cout << "Perímetro = " << 2 * PI * radio << " u\n";
    cout << "Área = " << PI * pow(radio, 2) << " u²\n";
}

void OperacionesCuadrado(double lado)
{
    if (!MedidaPositiva(lado)) return;

    cout << "Perímetro = " << 4 * lado << " u\n";
    cout << "Área = " << lado * lado << " u²\n";
    cout << "Diagonal = " << lado * sqrt(2.0) << " u\n";
}

void OperacionesTriangulo(double ladoA, double ladoB, double ladoC)
{
    if (!MedidaPositiva(ladoA) || !MedidaPositiva(ladoB) ||
        !MedidaPositiva(ladoC)) return;

    if (ladoA + ladoB <= ladoC || ladoA + ladoC <= ladoB ||
        ladoB + ladoC <= ladoA)
    {
        cout << "Error: las medidas no forman un triángulo.\n";
        return;
    }

    const double perimetro = ladoA + ladoB + ladoC;
    const double semiperimetro = perimetro / 2.0;
    const double area = sqrt(semiperimetro * (semiperimetro - ladoA) *
                             (semiperimetro - ladoB) * (semiperimetro - ladoC));

    cout << "Perímetro = " << perimetro << " u\n";
    cout << "Semiperímetro = " << semiperimetro << " u\n";
    cout << "Área = " << area << " u²\n";
    cout << "Altura respecto al primer lado = " << (2 * area) / ladoA << " u\n";
}

void OperacionesRectangulo(double base, double altura)
{
    if (!MedidaPositiva(base) || !MedidaPositiva(altura)) return;

    cout << "Perímetro = " << 2 * (base + altura) << " u\n";
    cout << "Área = " << base * altura << " u²\n";
    cout << "Diagonal = " << hypot(base, altura) << " u\n";
}

void OperacionesRombo(double lado, double diagonalMayor, double diagonalMenor)
{
    if (!MedidaPositiva(lado) || !MedidaPositiva(diagonalMayor) ||
        !MedidaPositiva(diagonalMenor)) return;

    cout << "Perímetro = " << 4 * lado << " u\n";
    cout << "Área = " << (diagonalMayor * diagonalMenor) / 2.0 << " u²\n";
}

void OperacionesTrapecio(double baseMayor, double baseMenor, double ladoA,
                         double ladoB, double altura)
{
    if (!MedidaPositiva(baseMayor) || !MedidaPositiva(baseMenor) ||
        !MedidaPositiva(ladoA) || !MedidaPositiva(ladoB) ||
        !MedidaPositiva(altura)) return;

    cout << "Perímetro = " << baseMayor + baseMenor + ladoA + ladoB << " u\n";
    cout << "Área = " << ((baseMayor + baseMenor) * altura) / 2.0 << " u²\n";
    cout << "Mediana = " << (baseMayor + baseMenor) / 2.0 << " u\n";
}

void OperacionesPoligonoRegular(int numeroLados, double lado)
{
    if (numeroLados < 3)
    {
        cout << "Error: un polígono debe tener al menos tres lados.\n";
        return;
    }
    if (!MedidaPositiva(lado)) return;

    const double perimetro = numeroLados * lado;
    const double apotema = lado / (2 * tan(PI / numeroLados));

    cout << "Perímetro = " << perimetro << " u\n";
    cout << "Apotema = " << apotema << " u\n";
    cout << "Área = " << (perimetro * apotema) / 2.0 << " u²\n";
}
