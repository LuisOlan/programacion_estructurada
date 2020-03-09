#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0,n,p,sum=0;
	printf("Dame un numero\n");
	scanf("%d",&n);
	if(n<0){
		printf("Este numero no es valido\n");
		}
		else
		do{
			i=i+1;
			sum=sum+n;
			printf("Dame un numero\n");
			scanf("%d",&n);	
		}
		while(n>=0);
	p=sum/i;
	printf("Promedio:%d",p);	
	return 0;
}
