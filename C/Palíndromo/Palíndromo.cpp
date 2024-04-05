#include<windows.h>
#include<string.h>
#include<stdio.h>
#include<iostream>
using namespace std;

bool GetPalindrome(string cadena1, char cadena2[50])
{
	char auxCadena1[10] = "";
	int l = cadena1.length();
	
	for(int i = 0; i < cadena1.size(); i++)
	{
		auxCadena1[i] = cadena1[--l];
	}
	
	bool flag = (strcmp(auxCadena1,strrev(cadena2)) == 0) ? true : false;
	
  return flag;
}

int main(int argc, char *argv[])
{
    system("color 0F");
    setlocale(LC_ALL,"");

    string cadena1;
    char cadena2[50];
    
    cout << "Cadena 1 : ";
    getline(cin, cadena1);
    
    printf("Cadena 2: ");
    scanf("%[^\n]s", &cadena2);
    
	if(GetPalindrome(cadena1, cadena2))
		cout << "Si es Palindromo" << endl;
	else
		cout << "No es Palindromo" << endl;
	
	system("Pause");
	return 0;
}
