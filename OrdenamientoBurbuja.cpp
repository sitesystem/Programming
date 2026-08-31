#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>     // SetLocale en C
#include <clocale>      // SetLocale en C++
#include <iostream>
using namespace std;

#define MAX_ELEMENTOS 100

void ordenamientoBurbuja(int arreglo[], int cantidad);
void mostrarArreglo(const int arreglo[], int cantidad);

int main(void)
{
    int numeros[MAX_ELEMENTOS];
    int cantidad;
    int i;

    printf("ORDENAMIENTO BURBUJA\n");
    printf("Cantidad de elementos (1-%d): ", MAX_ELEMENTOS);

    if (scanf("%d", &cantidad) != 1 || cantidad < 1 ||
        cantidad > MAX_ELEMENTOS) {
        printf("Error: la cantidad ingresada no es valida.\n");
        return 1;
    }

    printf("Ingresa los %d numeros enteros:\n", cantidad);
    for (i = 0; i < cantidad; i++) {
        printf("Elemento %d: ", i + 1);

        if (scanf("%d", &numeros[i]) != 1) {
            printf("Error: debes ingresar solamente numeros enteros.\n");
            return 1;
        }
    }

    printf("\nArreglo original: ");
    mostrarArreglo(numeros, cantidad);

    ordenamientoBurbuja(numeros, cantidad);

    printf("Arreglo ordenado:  ");
    mostrarArreglo(numeros, cantidad);

    system("Pause"); // getchar();
    return 0;
}

void ordenamientoBurbuja(int arreglo[], int cantidad)
{
    int i;
    int j;
    int temporal;
    int huboIntercambio;

    for (i = 0; i < cantidad - 1; i++) {
        huboIntercambio = 0;

        for (j = 0; j < cantidad - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                temporal = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temporal;
                huboIntercambio = 1;
            }
        }

        if (!huboIntercambio) {
            break;
        }
    }
}

void mostrarArreglo(const int arreglo[], int cantidad)
{
    int i;

    for (i = 0; i < cantidad; i++) {
        printf("%d", arreglo[i]);

        if (i < cantidad - 1) {
            printf(" ");
        }
    }

    printf("\n");
}
