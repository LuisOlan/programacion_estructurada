#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	printf("Ingrese un caracter\n");
	c=getchar();
	int a=(int) c;
	if (48<= a&&a <=57)
	printf("Numero ingresado\n");
	else
	if (65 <= a&&a <=90)
	printf("Mayuscula ingresada\n");
	else
	if (97<= a&&a <=122)
	printf("Minuscula ingresada\n");
	else
	printf("Simbolo ingresado\n");
	system("pause");
	
	return 0;
}
