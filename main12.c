#include <stdio.h>
#include <stdlib.h>
#define T 10

struct datosAlumno{
	int matricula;
	char nombre[20];
	char apellido[20];
	int cumple; /*de preferencia solo el año*/
	char escuela[20];
	int year;
	char carrera[20];
	char genero[20];
}A1[T];

int Alumno(struct datosAlumno *alumno,int matricula,char nombre[],char apellido[],int cumple,char escuela[],int year,char carrera[],char genero[]);

int main() {
		int i,j;
	for(i=0;i<T;i++){
		printf("Ingrese su matricula: ");
		scanf("%d",&A1[i].matricula);
		printf("Ingrese su nombre: ");
		scanf("%s",&A1[i].nombre);
		printf("Ingrese su apellido: ");
		scanf("%s",&A1[i].apellido);
		fflush(stdin);
		printf("Ingrese el año de nacimiento: ");
		scanf("%d",&A1[i].cumple);
		printf("Ingrese la escuela: ");
		scanf("%s",&A1[i].escuela);
		printf("Ingrese el año(numero): ");
		scanf("%d",&A1[i].year);
		fflush(stdin);
		printf("Ingrese la carrera: ");
		scanf("%s",&A1[i].carrera);
		printf("Ingrese el genero: ");
		scanf("%s",&A1[i].genero);
	}
	system("cls");
	printf("\nREPORTE DE ALUMNOS\n");
	for(i=0;i<T;i++)
	printf("Matricula: %d\nNombre: %s\nApellido: %s\nBirth: %d\nEscuela: %s\nAno: %d\nCarrera: %s\nGenero: %s\n",A1[i].matricula,A1[i].nombre,A1[i].apellido,A1[i].cumple,A1[i].escuela,A1[i].year,A1[i].carrera,A1[i].genero);
	return 0;
}

int Alumno(struct datosAlumno *alumno,int matricula,char nombre[],char apellido[],int cumple,char escuela[],int year,char carrera[],char genero[])
{
	strcpy(alumno=nombre,nombre);
	strcpy(alumno=apellido,apellido);
	strcpy(alumno=escuela,escuela);
	strcpy(alumno=carrera,carrera);
	strcpy(alumno=genero,genero);
	alumno->matricula=matricula;
	alumno->cumple=cumple;
	alumno->year=year;
}
