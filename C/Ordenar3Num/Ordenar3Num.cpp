#include<windows.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    system("color 0F");
    setlocale(LC_ALL,"");

    string name = "Eduardo";
    int num1, num2, num3;

    printf("Ingresa el 1er n�mero: ");
    scanf("%i", &num1);
    printf("Ingresa el 2do n�mero: ");
    scanf("%i", &num2);
    printf("Ingresa el 3er n�mero: ");
    scanf("%i", &num3);

    // C�lculo de las combinaciones es = 8 combinaciones
    // NOTA: En las combinaciones NO importa el orden de las variables.

    if((num1>=num2)&&(num2>=num3))
        printf("Mayor: %i \nMedio: %i \nMenor: %i \n", num1, num2, num3);
    else if((num1>=num3)&&(num3>=num2))
        printf("Mayor: %i \nMedio: %i \nMenor: %i \n", num1, num3, num2);
    else if((num2>=num1)&&(num1>=num3))
        printf("Mayor: %i \nMedio: %i \nMenor: %i \n", num2, num1, num3);
    else if((num2>=num3)&(num3>=num1))
        printf("Mayor: %i \nMedio: %i \nMenor: %i \n", num2, num3, num1);
    else if((num3>=num1)&(num1>=num2))
        printf("Mayor: %i \nMedio: %i \nMenor: %i \n", num3, num1, num2);
    else if((num3>=num2)&(num2>=num1))
        printf("Mayor: %i \nMedio: %i \nMenor: %i \n", num3, num2, num1);

	system("Pause");
	return 0;
}
