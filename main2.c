#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=3, b=4, c=0;
	char n;
	c=a+b;
	printf("%d+%d=%d\n",a,b,c);
	c=a-b;
	printf("%d-%d=%d\n",a,b,c);
	c=a*b;
	printf("%d*%d=%d\n",a,b,c);
	c=a/b;
	printf("%d/%d=%d\n",a,b,c);
	c=a%b;
	printf("%dmod%d=%d\n",a,b,c);
	c=a<<b;
	printf("%d\n",c);
	c=a>>b;
	printf("%d\n",c);
	c=a<b;
	printf("%d es menor a %d\n",a,b);
	c=b>a;
	printf("%d es mayor a %d\n",b,a);
	c=a==b;
	printf("%d nos es igual a %d\n",a,b);
	c=++a;
	printf("%d\n",c);
	c=--b;
	printf("%d\n",c);
	
	/*booleanos*/
	if ("a<b && b<c")
	printf("Es verdad\n");
	else printf("Es falso\n");
	if ("a<b || b>c")
	printf("Es verdadero\n");
	else  printf("Es falso\n");
	if (!"a=b")
	print("es falso\n");
	else printf("es verdadero\n");
	
	/*caracter*/
	printf("Ingresa un caracter");
	scanf("%c",&n);
	if (n>=66 && n<=90 || n>=97 && n<=122 || n>=164 && n<=165){
		if (n==65 || n==69 || n==73 || n==79 || n==85 || n==97 || n==101 || n==105 || n==111 || n==117)
		printf ("La letra %c es vocal",n);
		else printf ("La letra %c no es vocal",n);}
	else printf ("El valor no es una letra");
		
	
	

	return 0;
}
