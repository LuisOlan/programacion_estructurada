#include <stdio.h>
#include <stdlib.h>

int main() {
	int mat[9],cumple[9];
	char nom[8][10],ape[8][10],esc[8][10],grado[8][10],carrera[8][10],gen[8][10];
	int i,j;
	for(i=0;i<2;i++){
		printf("matricula: ");
		scanf("%d",&mat[i]);
		printf("nombre: ");
		scanf("%s",&nom[i]);
		fflush(stdin);
		printf("apellido: ");
		scanf("%s",&ape[i]);
		fflush(stdin);
		printf("cumpleaños: ");
		scanf("%d",&cumple[i]);
		fflush(stdin);
		printf("escuela: ");
		scanf("%s",&esc[i]);
		fflush(stdin);
		printf("grado: ");
		scanf("%s",&grado[i]);
		fflush(stdin);
		printf("carrera: ");
		scanf("%s",&carrera[i]);
		fflush(stdin);
		printf("genero: ");
		scanf("%s",gen[i]);
	}
	printf("----------------------------\n");
	for(i=0;i<2;i++){
			printf("Matricula: %d\n",mat[i]);
			printf("Nombre: %s\n",nom[i]);
			printf("Apellido: %s\n",ape[i]);
			printf("Cumpleaños: %d\n",cumple[i]);
			printf("Escuela: %s\n",esc[i]);
			printf("Grado: %s\n",grado[i]);
			printf("Carrera: %s\n",carrera[i]);
			printf("Genero: %s\n",gen[i]);
	}
	system("pause");
}
