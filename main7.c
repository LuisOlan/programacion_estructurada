#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j,k=0,n=0,num,prm[100],prm2[100];
	printf("Ingrese un numero del entre 1 y 100\n");
	scanf("%d",&num);
	if(num<100){
	for(i=1;i<=num;i++)
		prm[i]=i;
	for(i=0;i<num;i++){
		n=0;
		for(j=2;j<prm[i];j++){
			if(prm[i]%j==0){
				n=1;
				break;
			}
		}
		if(n==0){
			prm2[k]=prm[i];
			k++;
		}
	}
	printf("---NUMEROS PRIMOS---\n");
	for(i=0;i<k;i++)
	printf("%d,",prm2[i]);
	}else printf("Numero Invalido");
	return 0;
}
