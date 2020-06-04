#include <stdio.h>
#include <stdlib.h>

int main() {
	float n,n2,r;
	char c;
	printf("WELCOME TO SIMPLE CALCULATOR\n");
	printf("---------------------------------\n");
	printf("Ingresa el primer digito\n");
	scanf("%f",&n);
	printf("Ingresa un segundo digito\n");
	scanf("%f",&n2);
	printf("Ingresa la operacion\n");
	scanf(" %c",&c);

	switch (c){
		case '+':
			r = n+n2;
			break;
		case '-':
			r = n-n2;
			break;
		case '*':
			r = n*n2;
			break;
		case '/':
			r = n/n2;
			break;

		default:
			printf("Invalid operator");

	}
	printf("%f %c %f = %f",n,c,n2,r);

	return 0;
}
