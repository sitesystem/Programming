#include<windows.h>
#include<stdio.h>
#include<iostream>
using namespace std;

const int TAM = 10;
int arreglo[TAM] = { 4, 1, 5, 10, 5, 9, 3, 4, 1, 2 };
void Ordenar();
void Show();

int main(int argc, char *argv[])
{
    system("color 0F");

    printf("\nLa lista DESORDENADA es: \n");
    Show();
    Ordenar();
    printf("\nLa lista ORDENADA es: \n");
    Show();

    // system("Pause");
	return 0;
}

void Ordenar()
{
    bool flag = true;

    for(int i = 0; i < TAM && flag; i++)
    {
        flag = false;

        for(int j = 0; j < TAM - i - 1; j++)
        {
            if(arreglo[j]>arreglo[j+1])
            {
                flag = true;
                int aux = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = aux;
            }
        }
    }
}

void Show()
{
    for(int i = 0; i < TAM; i++)
        printf("%d ", arreglo[i]);
    cout << endl;
}
