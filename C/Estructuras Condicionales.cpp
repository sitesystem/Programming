#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
main() // Función principal
{
	system("color 0F");		// Pone el color de fondo negro y color de fuente blanco
    setlocale(LC_ALL,"");	// Asignar el idioma local para usar acentos y ñ
    
	float calif1, calif2, calif3, promedio;		// Variables de Tipo de Dato flotante (decimales)
	
	printf("Escribe la 1ra calificación: ");
	scanf("%f", &calif1);
	
	printf("Escribe la 2da calificación: ");
	scanf("%f", &calif2);
	
	printf("Escribe la 3ra calificación: ");
	scanf("%f", &calif3);
	
	promedio = (calif1 + calif2 + calif3)/3;
	
	printf("\nPromedio = %.2f\n", promedio);
	// cout << "Promedio = " << promedio << endl;
	
	if(promedio>6)
	{
		printf("APROBADO\n");
	}
	
	else if(promedio==6)
	{
		printf("PANSASO\n");
	}
	
	else // if(promedio<6)
	{
		printf("REPROBADO\n");
	}
  
  cout << endl;
  system("Pause");
}
