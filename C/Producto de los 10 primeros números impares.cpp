#include<windows.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int main(int argc, char *argv[])
{
    system("color 0F");
    setlocale(LC_ALL,"");
    
    int num = 0, cont = 1;
    long producto = 1;
    
    while(cont<=10)
    {
		if(num%2 != 0)
		{
			producto *= num;
			// printf("%i.- %i es impar\n", cont, num);
			cont++;
		}
		num++;
	}
	
	printf("%ld\n", producto);
	
	system("Pause");
	return 0;
}
