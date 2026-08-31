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

void quickSort(int arreglo[], int inicio, int fin);
int particionar(int arreglo[], int inicio, int fin);
void intercambiar(int *a, int *b);
void mostrarArreglo(const int arreglo[], int cantidad);

int main(void)
{
    int numeros[MAX_ELEMENTOS];
    int cantidad;
    int i;

    printf("ORDENAMIENTO QUICK SORT\n");
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

    quickSort(numeros, 0, cantidad - 1);

    printf("Arreglo ordenado:  ");
    mostrarArreglo(numeros, cantidad);

    system("Pause"); // getchar();
    return 0;
}

void quickSort(int arreglo[], int inicio, int fin)
{
    int posicionPivote;

    if (inicio < fin) {
        posicionPivote = particionar(arreglo, inicio, fin);
        quickSort(arreglo, inicio, posicionPivote - 1);
        quickSort(arreglo, posicionPivote + 1, fin);
    }
}

int particionar(int arreglo[], int inicio, int fin)
{
    int pivote = arreglo[fin];
    int indiceMenor = inicio - 1;
    int j;

    for (j = inicio; j < fin; j++) {
        if (arreglo[j] <= pivote) {
            indiceMenor++;
            intercambiar(&arreglo[indiceMenor], &arreglo[j]);
        }
    }

    intercambiar(&arreglo[indiceMenor + 1], &arreglo[fin]);
    return indiceMenor + 1;
}

void intercambiar(int *a, int *b)
{
    int temporal = *a;
    *a = *b;
    *b = temporal;
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
