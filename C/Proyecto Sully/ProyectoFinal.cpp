/*
	PROYECTO FINAL
	NOMBRE:			Sulamita González Trejo
	MATRÍCULA:		18-011-0322
	GRUPO:			1108
	FECHA ENTREGA:	17/05/2019
*/
	
#include <conio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>
#include <windows.h>
#include <stdio.h>
#include <iostream>
using namespace std;

void MostrarDatos()
{
	printf("\n\t*********************************************************");
	printf("\n\t*   PROYECTO FINAL\t\t\t\t\t*");
	printf("\n\t*   NOMBRE: \t\tSulamita Gonz%clez Trejo\t\t*", 160);
	printf("\n\t*   MATR%cCULA: \t\t18-011-0322\t\t\t*", 214);
	printf("\n\t*   GRUPO: \t\t1108\t\t\t\t*");
	printf("\n\t*   FECHA ENTREGA: \t17/05/2019\t\t\t*");
	printf("\n\t*********************************************************\n");
}

struct Alumnos
{
	char nombre[30];
	char matricula[20];
	int parcial1, parcial2, parcial3;
	float promedio;
};

struct Biblioteca
{
	char tituloLibro[30];
	char autor[30];
	char editorial[30];
	int edicion;
	int anio;
};

main()
{
	system ("color 0f");
	
	int opcion1, opcion2, opcion3;
		
	do  /**********  MENÚ PRINCIPAL  **********/
	{	system ("cls");
		MostrarDatos();
		printf("\n\t.: MEN%c PRINCIPAL :.\n\n\t1.- Matem%cticas\n\t2.- Salarios de una Empresa\n\t3.- Escuela\n\t4.- Salir\n", 233, 160);
		printf("\n\tElige una opci%cn: ", 162);
		scanf("%i", &opcion1);
		
		switch (opcion1)
		{				
			case 1:		do  /**********  SUBMENÚ 1. MATEMÁTICAS  **********/
						{	system("cls");
							MostrarDatos();
							printf("\n\t.: SUBMEN%c 1. MATEM%cTICAS :.\n", 233, 181);
							printf("\n\t1. Series Num%cricas\n\t2. Operaciones B%csicas\n\t3. Geometr%ca Plana (C%clculo de Per%cmetro y %crea)\n\t4. %clgebra\n\t5. Conversor de Unidades (Viceversa)\n\t6. Salir\n", 130, 160, 161, 160, 161, 181, 181);
							printf("\n\tElige una opci%cn: ", 162);
							scanf("%i", &opcion2);
							
							switch (opcion2)
							{
								case 1:	do  /**********  SUBMENÚ 1.1 SERIES NUMÉRICAS  **********/
										{	system("cls");
											MostrarDatos();
											printf("\n\t.: SUBMEN%c 1.1 SERIES NUM%cRICAS :.\n", 233, 144);
											printf("\n\t1. Series de Fibonacci\n\t2. Factorial de un N%cmero\n\t3. N%cmeros Primos\n\t4. Salir\n", 163, 163);
											printf("\n\tElige una opci%cn: ", 162);
											scanf("%i", &opcion3);
											
											int num, numAnterior = 0, aux, res = 1, factorial = 1, contador;
											
											switch (opcion3)
											{
												case 1:		// SUBMENÚ 1.1.1 SERIE DE FIBONACCI
															printf("\n\t.: SERIE DE FIBONACCI :.\n");
															printf("\n\t%cCuantos n%cmeros?: ", 168, 163);
															scanf("%i", &num);
															cout << "\tR/ 0 ";
															for (int i = 1; i < num; i++)
															{
																cout << res << " ";
																aux = res;
																res += numAnterior;
																numAnterior = aux;
															}
															getch();
															break;
												case 2:		// SUBMENÚ 1.1.2 FACTORIAL DE UN NÚMERO
															printf("\n\t.: FACTORIAL DE UN N%cMERO :.\n", 233);
															printf("\n\t- Escribe un n%cmero: ", 163);
															scanf("%i", &num);
															for (int i = 1; i <= num; i++)
																factorial *= i;
															cout << "\tR/ El Factorial de " << num << " es = " << factorial << " ";
															getch();
															break;
												case 3:		// SUBMENÚ 1.1.3 NÚMEROS PRIMOS
															printf("\n\t.: N%cMEROS PRIMOS :.\n", 233);
															printf("\n\t%cHasta qu%c n%cmero?: ", 168, 130, 163);
															scanf("%i", &num);
															printf("\tR/ ");
															for (int i = 1; i <= num; i++)
															{
																contador = 0;
																
																for (int j = 1; j <= i; j++)
																	if (i%j == 0)
																		contador++;
																
																if (contador == 2)
																	printf("%d ", i);
															}
															getch();
															break;
												case 4:		break; // SUBMENÚ 1.1.4 SALIR
												default: 	cout << "\n\tNo eligi" << (char)162 << " ninguna opci" << (char)162 << "n ";
															getch();
													 		break;
											}
										} while (opcion3 >= 1 && opcion3 <= 3);
										break;
								case 2: do  /**********  SUBMENÚ 1.2 OPERACIONES BÁSICAS  **********/
										{	system("cls");
											MostrarDatos();
											printf("\n\t.: SUBMEN%c 1.2 OPERACIONES B%cSICAS :.\n", 233, 181);
											printf("\n\t1. Suma\n\t2. Resta\n\t3. Multiplicaci%cn\n\t4. Divisi%cn\n\t5. M%cdulo\n\t6. Salir\n", 162, 162, 162);
											printf("\n\tElige una opci%cn: ", 162);
											scanf("%i", &opcion3);
											
											float num1 = 0, num2 = 0;
																						
											switch (opcion3)
											{
												case 1:		// SUBMENÚ 1.2.1 SUMA
															printf("\n\t.: SUMA :.\n");
															printf("\n\t- Escribe un n%cmero: ", 163);
															scanf("%f", &num1);
															cout << "\t- Escribe otro n" << (char)163 << "mero: ";
															cin >> num2;
															printf("\n\tR/ La Suma es = %.2f ", num1 + num2);
															getch();
															break;
												case 2:		// SUBMENÚ 1.2.2 RESTA
															printf("\n\t.: RESTA :.\n");
															printf("\n\t- Escribe un n%cmero: ", 163);
															scanf("%f", &num1);
															cout << "\t- Escribe otro n" << (char)163 << "mero: ";
															cin >> num2;
															printf("\n\tR/ La Resta es = %.2f ", num1 - num2);
															getch();
															break;
												case 3:		// SUBMENÚ 1.2.3 MULTIPLICACIÓN
															printf("\n\t.: MULTIPLICACI%cN :.\n", 224);
															printf("\n\t- Escribe un n%cmero: ", 163);
															scanf("%f", &num1);
															cout << "\t- Escribe otro n" << (char)163 << "mero: ";
															cin >> num2;
															printf("\n\tR/ La Multiplicaci%cn es = %.2f ", 162, num1 * num2);
															getch();
															break;
												case 4:		// SUBMENÚ 1.2.4 DIVISIÓN
															printf("\n\t.: DIVISI%cN :.\n", 224);
															do
															{
																printf("\n\t- Escribe el numerador (que no sea 0): ");
																scanf("%f", &num1);
																cout << "\t- Escribe el denominador (que no sea 0): ";
																cin >> num2;
															} while(num1 == 0 || num2 == 0);
															printf("\n\tR/ La Divisi%cn es = %.2f ", 162, num1 / num2);
															getch();
															break;
												case 5:		// SUBMENÚ 1.2.5 MÓDULO
															printf("\n\t.: M%cDULO :.\n", 224);
															printf("\n\t- Escribe un n%cmero: ", 163);
															scanf("%f", &num1);
															cout << "\t- Escribe otro n" << (char)163 << "mero: ";
															cin >> num2;
															printf("\n\tR/ El M%cdulo es = %i ", 162, (int)num1%(int)num2);
															getch();
															break;
												case 6:		break; // SUBMENÚ 1.2.6 SALIR
												default: 	cout << "\n\tNo eligi" << (char)162 << " ninguna opci" << (char)162 << "n ";
															getch();
													 		break;
											}
										} while (opcion3 >= 1 && opcion3 <= 5);
										break;
								case 3: do  /**********  SUBMENÚ 1.3 GEOMETRÍA PLANA (CÁLCULO DE PERÍMETRO Y ÁREA)  **********/
										{	system("cls");
											MostrarDatos();
											printf("\n\t.: GEOMETR%cA PLANA (C%cLCULO DEL PER%cMETRO Y %cREA) :.\n", 214, 181, 214, 181);
											printf("\n\t1. Cuadrado\n\t2. C%crculo\n\t3. Tri%cngulo\n\t4. Rect%cngulo\n\t5. Salir\n", 161, 160, 160);
											printf("\n\tElige una opci%cn: ", 162);
											scanf("%i", &opcion3);
											
											float num = 0, radio = 0, pi = 3.1416, base = 0, altura = 0, ancho = 0, largo = 0;
											
											switch (opcion3)
											{
												case 1:		// SUBMENÚ 1.3.1 ÁREA Y PERÍMETRO DEL CUADRADO
															printf("\n\t.: %cREA Y PER%cMETRO DEL CUADRADO :.\n", 181, 214);
															printf("\n\t- Medida de un lado del Cuadrado: ");
															scanf("%f", &num);
															printf("\n\tR/ %crea del Cuadrado = %.2f u%c", 181, num*num, 253);
															printf("\n\tR/ Per%cmetro del Cuadrado = %.2f u ", 161, num*4);
															getch();
															break;
												case 2:		// SUBMENÚ 1.3.2 ÁREA Y PERÍMETRO DEL CÍRCULO
															printf("\n\t.: %cREA Y PER%cMETRO DEL C%cRCULO :.\n", 181, 214, 214);
															printf("\n\t- Escribe el radio: ");
															scanf("%f", &radio);
															printf("\n\tR/ %crea del C%crculo = %.2f u%c", 181, 161, pi*radio*radio, 253);
															printf("\n\tR/ Per%cmetro del C%crculo = %.2f u ", 161, 161, pi*2*radio);
															getch();
															break;
												case 3:		// SUBMENÚ 1.3.3 ÁREA Y PERÍMETRO DEL TRIÁNGULO
															printf("\n\t.: %cREA Y PER%cMETRO DEL TRI%cNGULO EQUILATERO :.\n", 181, 214, 181);
															printf("\n\t- Medida de la base del Tri%cngulo: ", 160);
															scanf("%f", &base);
															printf("\t- Medida de la altura del Tri%cngulo: ", 160);
															scanf("%f", &altura);
															printf("\n\tR/ %crea del Tri%cngulo = %.2f u%c", 181, 160, (base*altura)/2, 253);
															printf("\n\tR/ Per%cmetro del Tri%cngulo = %.2f u ", 161, 160, base*3);
															getch();
															break;
												case 4:		// SUBMENÚ 1.3.4 ÁREA Y PERÍMETRO DEL RECTÁNGULO
															printf("\n\t.: %cREA Y PER%cMETRO DEL RECT%cNGULO :.\n", 181, 214, 181);
															printf("\n\t- Medida del ancho del Rect%cngulo: ", 160);
															scanf("%f", &ancho);
															printf("\t- Medida del largo del Rect%cngulo: ", 160);
															scanf("%f", &largo);
															printf("\n\tR/ %crea del Rect%cngulo = %.2f u%c", 181, 160, ancho*largo, 253);
															printf("\n\tR/ Per%cmetro del Rect%cngulo = %.2f u ", 161, 160, 2*ancho+2*largo);
															getch();
															break;
												case 5:		break; // SUBMENÚ 1.3.5 SALIR
												default: 	cout << "\n\tNo eligi" << (char)162 << " ninguna opci" << (char)162 << "n ";
															getch();
													 		break;
											}
										} while (opcion3 >= 1 && opcion3 <= 4);
										break;
								case 4: do  /**********  SUBMENÚ 1.4 ÁLGEBRA  **********/
										{	system("cls");
											MostrarDatos();
											printf("\n\t.: %cLGEBRA :.\n", 181);
											printf("\n\t1. Ecuaci%cn de 1er Grado\n\t2. F%crmula General\n\t3. Distancia entre 2 Puntos\n\t4. Salir\n", 162, 162);
											printf("\n\tElige una opci%cn: ", 162);
											scanf("%i", &opcion3);
											
											float a, b, c, d, x, raiz1, raiz2, distancia;
											
											switch (opcion3)
											{
												case 1:		// SUBMENÚ 1.4.1 ECUACIÓN DE 1ER GRADO (ax + b = cx + d)
															printf("\n\t.: ECUACI%cN DE 1ER GRADO (ax + b = cx + d) :.\n", 224);
															printf("\n\t- Escribe el valor de a: ");
															scanf("%f", &a);
															printf("\t- Escribe el valor de b: ");
															scanf("%f", &b);
															printf("\t- Escribe el valor de c: ");
															scanf("%f", &c);
															printf("\t- Escribe el valor de d: ");
															scanf("%f", &d);
															
															x = (d-b)/(a-c);
															printf("\n\tR/ Al despejar x = %.2f ", x);
															getch();
															break;
												case 2:		// SUBMENÚ 1.4.2 FÓRMULA GENERAL
															printf("\n\t.: F%cRMULA GENERAL :.\n", 224);
															printf("\n\t- Escribe el valor de a: ");
															scanf("%f", &a);
															printf("\t- Escribe el valor de b: ");
															scanf("%f", &b);
															printf("\t- Escribe el valor de c: ");
															scanf("%f", &c);
															
															raiz1 = (-b + sqrt(pow(b,2)-(4*a*c)))/(2*a);
															raiz2 = (-b - sqrt(pow(b,2)-(4*a*c)))/(2*a);
															
															printf("\n\tR/ Ra%cz 1 = %.2f", 161, raiz1);
															printf("\n\tR/ Ra%cz 2 = %.2f ", 161, raiz2);
															getch();
															break;
												case 3:		// SUBMENÚ 1.4.3 DISTANCIA ENTRE 2 PUNTOS DEL PLANO CARTESIANO
															printf("\n\t.: DISTANCIA ENTRE 2 PUNTOS :.\n");
															printf("\n\t- Escribe el valor de x1: ");
															scanf("%f", &a);
															printf("\t- Escribe el valor de y1: ");
															scanf("%f", &b);
															printf("\t- Escribe el valor de x2: ");
															scanf("%f", &c);
															printf("\t- Escribe el valor de y2: ");
															scanf("%f", &d);
															
															distancia = sqrt(pow((c-a),2) + pow((d-b),2));
															printf("\n\tR/ Distancia entre dos puntos: (%.1f, %.1f)(%.1f, %.1f) = %f u ", a, b, c, d, distancia);
															getch();
															break;
												case 4:		break; // SUBMENÚ 1.4.4 SALIR
												default: 	cout << "\n\tNo eligi" << (char)162 << " ninguna opci" << (char)162 << "n ";
															getch();
															break;
											}
										} while (opcion3 >= 1 && opcion3 <= 3);
										break;
								case 5: do  /**********  SUBMENÚ 1.5 CONVERSOR DE UNIDADES (VICEVERSA)  **********/
										{	system("cls");
											MostrarDatos();
											printf("\n\t.: CONVERSOR DE UNIDADES (VICEVERSA) :.\n");
											printf("\n\t1. Millas a Kil%cmetros\n\t2. Millas a Metros\n\t3. Metros a Cent%cmetros", 162, 161);
											printf("\n\t4. Onzas a Mil%cmetros\n\t5. Acres a Hect%creas\n\t6. M%c a Litros", 161, 160, 252);
											printf("\n\t7. Libras a Kilogramos\n\t8. Horas a Segundos\n\t9. Celsius a Fahrenheit\n\t10. Salir\n");
											printf("\n\tElige una opci%cn: ", 162);
											scanf("%i", &opcion3);
											
											float num;
											
											switch (opcion3)
											{
												case 1:		// SUBMENÚ 1.5.1 MILLAS A KILÓMETROS (VICEVERSA)
															printf("\n\t.: MILLAS A KIL%cMETROS (VICEVERSA) :.\n", 224);
															printf("\n\t- Escribe un valor a convertir: ");
															scanf("%f", &num);
															printf("\n\tR/ %f Millas = %f Km", num, num * 1.60934);
															printf("\n\tR/ %f Km = %f Millas ", num, num * 0.621371);
															getch();
															break;
												case 2:		// SUBMENÚ 1.5.2 MILLAS A METROS (VICEVERSA)
															printf("\n\t.: MILLAS A METROS (VICEVERSA) :.\n");
															printf("\n\t- Escribe un valor a convertir: ");
															scanf("%f", &num);
															printf("\n\tR/ %f Millas = %f mtrs", num, num * 1609.34);
															printf("\n\tR/ %f mtrs = %f Millas ", num, num * 0.000621371);
															getch();
															break;
												case 3:		// SUBMENÚ 1.5.3 METROS A CENTÍMETROS (VICEVERSA)
															printf("\n\t.: METROS A CENT%cMETROS (VICEVERSA) :.\n", 214);
															printf("\n\t- Escribe un valor a convertir: ");
															scanf("%f", &num);
															printf("\n\tR/ %f mtrs = %f cm", num, num * 100);
															printf("\n\tR/ %f cm = %f mtrs ", num, num * 0.01);
															getch();
															break;
												case 4:		// SUBMENÚ 1.5.4 ONZAS A MILÍMETROS (VICEVERSA)
															printf("\n\t.: ONZAS A MIL%cMETROS%c (VICEVERSA) :.\n", 214, 252);
															printf("\n\t- Escribe un valor a convertir: ");
															scanf("%f", &num);
															printf("\n\tR/ %f Onzas = %f mm%c", num, num * 29573.5, 252);
															printf("\n\tR/ %f mm%c = %f Onzas ", num, 252, num * 0.000033814);
															getch();
															break;
												case 5:		// SUBMENÚ 1.5.5 ACRES A HECTÁREAS (VICEVERSA)
															printf("\n\t.: ACRES A HECT%cREAS (VICEVERSA) :.\n", 181);
															printf("\n\t- Escribe un valor a convertir: ");
															scanf("%f", &num);
															printf("\n\tR/ %f Acres = %f Hect%creas", num, num * 0.404686, 160);
															printf("\n\tR/ %f Hect%creas = %f Acres ", num, 160, num * 2.47105);
															getch();
															break;
												case 6:		// SUBMENÚ 1.5.6 METROS CÚBICOS A LITROS (VICEVERSA)
															printf("\n\t.: METROS C%cBICOS A LITROS (VICEVERSA) :.\n", 233);
															printf("\n\t- Escribe un valor a convertir: ");
															scanf("%f", &num);
															printf("\n\tR/ %f m%c = %f Ltrs", num, 252, num * 1000);
															printf("\n\tR/ %f Ltrs = %f m%c ", num, num * 0.001, 252);
															getch();
															break;
												case 7:		// SUBMENÚ 1.5.7 LIBRAS A KILOGRAMO (VICEVERSA)
															printf("\n\t.: LIBRAS A KILOGRAMOS (VICEVERSA) :.\n");
															printf("\n\t- Escribe un valor a convertir: ");
															scanf("%f", &num);
															printf("\n\tR/ %f Lb = %f Kgs", num, num * 0.453592);
															printf("\n\tR/ %f Kgs = %f Lb ", num, num * 2.20462);
															getch();
															break;
												case 8:		// SUBMENÚ 1.5.8 HORAS A SEGUNDOS (VICEVERSA)
															printf("\n\t.: HORAS A SEGUNDOS (VICEVERSA) :.\n");
															printf("\n\t- Escribe un valor a convertir: ");
															scanf("%f", &num);
															printf("\n\tR/ %f Hrs. = %f seg", num, num * 3600);
															printf("\n\tR/ %f seg = %f Hrs. ", num, num * 0.000277778);
															getch();
															break;
												case 9:		// SUBMENÚ 1.5.9 CELSIUS A FAHRENHEIT (VICEVERSA)
															printf("\n\t.: CELSIUS A FAHRENHEIT (VICEVERSA) :.\n");
															printf("\n\t- Escribe un valor a convertir: ");
															scanf("%f", &num);
															printf("\n\tR/ %f %cC = %f Fahrenheit", num, 248, 32 + (num*9)/5);
															printf("\n\tR/ %f Fahrenheit = %f %cC ", num, (5.0/9.0)*(num - 32), 248);
															getch();
															break;
												case 10:	break; // SUBMENÚ 1.5.10 SALIR
												default: 	cout << "\n\tNo eligi" << (char)162 << " ninguna opci" << (char)162 << "n ";
															getch();
													 		break;
											}
										} while (opcion3 >= 1 && opcion3 <= 9);
										break;
								case 6: break; // SUBMENÚ 1.6 SALIR
								default: cout << "\n\tNo eligi" << (char)162 << " ninguna opci" << (char)162 << "n ";
										 getch();
						 				 break;
							}
						} while (opcion2 >= 1 && opcion2 <= 5);
						break;
			case 2:		do  /**********  SUBMENÚ 2. EMPRESA  **********/
						{	system("cls");
							MostrarDatos();
							printf("\n\t.: SUBMEN%c 2. SALARIOS DE UNA EMPRESA :.\n", 233);
							printf("\n\tDESCRIPCI%cN DEL C%cLCULO", 224, 181);
							printf("\n\t- Horas de trabajo por d%ca:\t\t 8 Hrs.", 161);
							printf("\n\t- Porcentaje del ISR:\t\t\t 10%c", 37);
							printf("\n\t- Seguridad Social:\t\t\t 5%c", 37);
							printf("\n\t- Salario equivalente a dos\n\t  salarios m%cnimos vigentes:\t\t $88.00 (Recomendado)\n", 161);
							printf("\n\t1. Salario Semanal\n\t2. Salario Quincenal\n\t3. Salario Mensual\n\t4. Salir\n");
							
							printf("\n\tElige una opci%cn: ", 162);
							scanf("%i", &opcion2);
							
							float salario;
							
							switch (opcion2)
							{
								case 1:	/**********  SUBMENÚ 2.1 SALARIO SEMANAL  **********/
										printf("\n\t.: SALARIO SEMANAL :.\n");
										printf("\n\t- Escribe el salario equivalente a dos salarios m%cnimos vigentes: $ ", 161);
										scanf("%f", &salario);
										
										salario = (2 * salario * 7) - (2 * salario * 7 * 0.10) - (2 * salario * 7 * 0.05);
										printf("\n\tR/ El Salario Semanal menos impuestos es = $%.2f ", salario);
										getch();
										break;
								case 2:	/**********  SUBMENÚ 2.2 SALARIO QUINCENAL  **********/
										printf("\n\t.: SALARIO QUINCENAL :.\n");
										printf("\n\t- Escribe el salario equivalente a dos salarios m%cnimos vigentes: $ ", 161);
										scanf("%f", &salario);
										
										salario = (2 * salario * 15) - (2 * salario * 15 * 0.10) - (2 * salario * 15 * 0.05);
										printf("\n\tR/ El Salario Quincenal menos impuestos es = $%.2f ", salario);
										getch();
										break;
								case 3:	/**********  SUBMENÚ 2.3 SALARIO MENSUAL  **********/
										printf("\n\t.: SALARIO MENSUAL :.\n");
										printf("\n\t- Escribe el salario equivalente a dos salarios m%cnimos vigentes: $ ", 161);
										scanf("%f", &salario);
										
										salario = (2 * salario * 30) - (2 * salario * 30 * 0.10) - (2 * salario * 30 * 0.05);
										printf("\n\tR/ El Salario Mensual menos impuestos es = $%.2f ", salario);
										getch();
										break;
								case 4: break; // SUBMENÚ 2.4 SALIR
								default: cout << "\n\tNo eligi" << (char)162 << " ninguna opci" << (char)162 << "n ";
										 getch();
					 				 	 break;
							}
						} while (opcion2 >= 1 && opcion2 <= 3);
						break;
			case 3:		do  /**********  SUBMENÚ 3. ESCUELA  **********/
						{	system("cls");
							MostrarDatos();
							printf("\n\t.: SUBMEN%c 3. ESCUELA :.\n", 233);
							printf("\n\t1. Promedio de Calificaciones de 1 Alumno\n\t2. Promedio de Calificaciones de 5 Alumnos\n\t3. Biblioteca\n\t4. Salir\n");
							printf("\n\tElige una opci%cn: ", 162);
							scanf("%i", &opcion2);
							
							int num, mayor = 0, menor = 0, aux_Mayor = 0, aux_Menor = 0;
							float cal1, cal2, cal3, suma = 0.0, prom;
							struct Alumnos alumns[5];
							struct Biblioteca libros[5];
							
							switch (opcion2)
							{
								case 1:	/**********  SUBMENÚ 3.1 PROMEDIO DE CALIFICACIONES DE UN ALUMNO  **********/
										printf("\n\t.: PROMEDIO DE CALIFICACIONES DE UN ALUMNO :.\n");
										printf("\n\t- Escribe la 1ra calificaci%cn: ", 162);
										scanf("%f", &cal1);
										printf("\t- Escribe la 2da calificaci%cn: ", 162);
										scanf("%f", &cal2);
										cout << "\t- Escribe la 3ra calificaci" << (char)162 << "n: ";
										cin >> cal3;
										printf("\n\tR/ El Promedio de las 3 Calificaciones es = %.2f ", (cal1+cal2+cal3)/3);
										getch();
										break;
								case 2:	/**********  SUBMENÚ 3.2 PROMEDIO DE CALIFICACIONES DE 5 ALUMNOS  **********/
										printf("\n\t.: PROMEDIO DE CALIFICACIONES DE 5 ALUMNOS :.\n");
										do
										{
											printf("\n\t%cCu%cntos alumnos (no menos de 5)?: ", 168, 160);
											scanf("%i", &num);
										} while(num < 5);
										
										for (int i = 0, j = 1; i < num; i++, j++)
										{
											printf("\n\tAlumno %i.", j);
											printf("\n\t- Nombre: ");
											scanf("%s", &alumns[i].nombre);
											printf("\t- Matr%ccula: ", 161);
											scanf("%s", &alumns[i].matricula);
											printf("\t- Escribe la 1ra calificaci%cn: ", 162);
											scanf("%i", &alumns[i].parcial1);
											printf("\t- Escribe la 2da calificaci%cn: ", 162);
											scanf("%i", &alumns[i].parcial2);
											cout << "\t- Escribe la 3ra calificaci" << (char)162 << "n: ";
											cin >> alumns[i].parcial3;
											alumns[i].promedio = (alumns[i].parcial1 + alumns[i].parcial2 + alumns[i].parcial3)/3.0;
											printf("\t- Promedio: %f\n", alumns[i].promedio);
											if (i > 0 && alumns[i].promedio >= alumns[i-1].promedio)
												aux_Mayor = i;
											else if (i > 0 && alumns[i].promedio < alumns[i-1].promedio)
												aux_Menor = i;
												
											mayor = aux_Mayor;
											menor = aux_Menor;
											suma += alumns[i].promedio;
											// printf("\n\t%d %d\n", i, j);	
											if (j == num)
												prom = suma / j;
										}
										
										for (int i = 0, j = 1; i < num; i++, j++)
										{
											if (mayor == i)
											{
												printf("\n\t*****************************");
												printf("\n\tR/ ALUMNO %i. Mayor Promedio", j);
												printf("\n\t*****************************");
												printf("\n\tR/ Nombre: %s ", alumns[i].nombre);
												printf("\n\tR/ Matr%ccula: %s", 161, alumns[i].matricula);
												printf("\n\tR/ Promedio: %f\n", alumns[i].promedio);
											}
											
											if (menor == i)
											{
												printf("\n\t*****************************");
												printf("\n\tR/ ALUMNO %i. Menor Promedio", j);
												printf("\n\t*****************************");
												printf("\n\tR/ Nombre: %s ", alumns[i].nombre);
												printf("\n\tR/ Matr%ccula: %s", 161, alumns[i].matricula);
												printf("\n\tR/ Promedio: %f\n", alumns[i].promedio);
											}
										}
										
										printf("\n\tR/ Promedio Total de los %d alumnos = %f ", num, prom);
										
										getch();
										break;
								case 3:	/**********  SUBMENÚ 3.3 BIBLIOTECA  **********/
										printf("\n\t.: BIBLIOTECA :.\n");
										do
										{
											printf("\n\t%cCu%cntos libros (no menos de 5)?: ", 168, 160);
											scanf("%i", &num);
										} while(num < 5);
										
										for (int i = 0 , j = 1 ; i < num ; i++, j++)
										{
											printf("\n\tLibro %i.", j);
											printf("\n\t- T%ctulo del libro: ", 161);
											scanf("%s", &libros[i].tituloLibro);
											printf("\t- Autor: ");
											scanf("%s", &libros[i].autor);
											printf("\t- Editorial: ");
											scanf("%s", &libros[i].editorial);
											printf("\t- Edici%cn: ", 162);
											scanf("%d", &libros[i].edicion);
											cout << "\t- A" << (char)164 << "o: ";
											cin >> libros[i].anio;
										}
										
										for (int i = 0, j = 1; i < num; i++, j++)
										{
											printf("\n\t*****************************");
											printf("\n\tR/ LIBRO %d", j);
											printf("\n\t*****************************");
											printf("\n\tR/ T%ctulo: %s ", 161, libros[i].tituloLibro);
											printf("\n\tR/ Autor: %s", libros[i].autor);
											printf("\n\tR/ Editorial: %s", libros[i].editorial);
											printf("\n\tR/ Edici%cn: %d", 162, libros[i].edicion);
											printf("\n\tR/ A%co: %d\n\t", 164, libros[i].anio);
										}
										
										getch();
										break;
								case 4: break; // SUBMENÚ 3.4 SALIR
								default: cout << "\n\tNo eligi" << (char)162 << " ninguna opci" << (char)162 << "n ";
										 getch();
					 				 	 break;
							}
						} while (opcion2 >= 1 && opcion2 <= 3);
						break;
			case 4:		break; // SUBMENÚ 4. SALIR
			default: 	cout << "\n\tNo eligi" << (char)162 << " ninguna opci" << (char)162 << "n" << endl;
					 	break;
		}
	} while (opcion1 >= 1 && opcion1 <= 3);
	
  system ("Pause");
}
