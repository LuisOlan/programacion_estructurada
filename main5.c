#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0,n,p,sum=0;
	printf("Ingresa un numero\n");
	scanf("%d",&n);
		while(n>=0){
			if (n<0){
			
	}
			else 
				i=i+1;
				sum=sum+n;
				printf("Ingresa un numero\n");
				scanf("%d",&n);
	}
	p=sum/i;
	printf("Promedio:%d",p);
	return 0;
}
