#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    system("color 0F");
    setlocale(LC_ALL,"");

    srand (time(NULL)); // Instrucci�n que inicializa el generador de n�meros aleatorios

	int num_aleatorio, num_adivinar, num_intentos = 0;

	// randomize();
    // num_aleatorio = random(101); // Obtenci�n de un n�mero aleatorio entero entre 0 y 100

	 num_aleatorio = rand() % 101; // Obtenci�n de un n�mero aleatorio entero entre 0 y 100

	do
	{
	    num_intentos++;

        printf("%i.- Adivina el n�mero: ", num_intentos);
        scanf("%i", &num_adivinar);

        if(num_aleatorio != num_adivinar)
        {
            if (num_adivinar>100 || num_adivinar<0)
                printf("El n�mero no entra en el rango\n");
            else if(num_aleatorio>num_adivinar)
                printf("Es mayor\n");
            else // if(num_aleatorio<num_adivinar)
                printf("Es menor\n");

            printf("��� Vuelve a intentarlo !!!\n\n");
            // getch();
            // system("cls");
        }
	}while(num_aleatorio != num_adivinar);

    printf("N�mero encontrado: %i a los %i intentos\n", num_adivinar, num_intentos);

    cout<<"N�mero aleatorio: "<<num_aleatorio<<endl;

	system("Pause");
	return 0;
}
