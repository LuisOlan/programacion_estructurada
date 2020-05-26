#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,j,esc,ma[3][3],ma2[3][3];
	printf("Ingresa el valor escalar\n");
	scanf("%d",&esc);
	printf("Ingresa el valor de la matriz\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%d][%d]",i,j);
			scanf("%d",&ma[i][j]);
			ma2[i][j]=ma[i][j]*esc;
		}
	}
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++)
			printf("%4d",ma[i][j]);
	}
	printf("\n");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++)
			printf("%4d",ma2[i][j]);
	}
	return 0;
}
