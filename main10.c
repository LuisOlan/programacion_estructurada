#include <stdio.h>
#include <stdlib.h>
#define T 10

struct datosAlumno{
	int matricula;
	char nombre[20];
	char apellido[20];
	int cumple;
	char escuela[20];
	int anio;
	char carrera[20];
	char genero[20];
}A1[T];

int main() {
	int i,j;
	for(i=0;i<T;i++){
		printf("Ingrese su matricula\n");
		scanf("%d",&A1[i].matricula);
		printf("Ingrese su nombre\n");
		scanf("%s",&A1[i].nombre);
		printf("Ingrese su apellido\n");
		scanf("%s",&A1[i].apellido);
		fflush(stdin);
		printf("Ingrese el dia de nacimiento\n");
		scanf("%d",&A1[i].cumple);
		printf("Ingrese la escuela\n");
		scanf("%s",&A1[i].escuela);
		printf("Ingrese el año\n");
		scanf("%d",&A1[i].anio);
		printf("Ingrese la carrera\n");
		scanf("%s",&A1[i].carrera);
		printf("Ingrese el genero\n");
		scanf("%s",&A1[i].genero);
	}
	system("cls");
	printf("\nReporte de alumnos\n");
	for(i=0;i<T;i++)
	printf("Matricula: %d\nNombre: %s\nApellido: %s\nBirth: %d\nEscuela: %s\nAno: %d\nCarrera: %s\nGenero: %s\n",A1[i].matricula,A1[i].nombre,A1[i].apellido,A1[i].cumple,A1[i].escuela,A1[i].anio,A1[i].carrera,A1[i].genero);
	
	return 0;
}
