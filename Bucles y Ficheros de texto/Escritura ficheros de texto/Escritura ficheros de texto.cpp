#include<stdio.h>
int main(){
	FILE *Read,*Write;
	char nombre[15],archivo[30],inicial;
	int num1, num2,sum=0;
	printf("Teclea el nombre del archivo: ");
	scanf("%s",archivo);
	printf("Teclea una inicial: ");
	scanf("\n%c",&inicial);
	Write=fopen(archivo,"a");
	if((Read=fopen(archivo,"r"))==NULL){
		printf("Error: no se pudo abrir el fichero %s",archivo);
		return 1;
	}	
	while((fscanf(Read,"%s%d%d",nombre,&num1, &num2))==3)		
		if(nombre[0]==inicial)
			sum++;

	fprintf(Write,"\nHay %d nombres que empiezan por la inicial %c",sum,inicial);
	printf("Hay %d nombres que empiezan por la inicial %c",sum,inicial);
	printf("\nEl resultado se ha guardado correctamente al final del fichero %s",archivo);
	fclose(Read);
	fclose(Write);
	return 0;
}
/*#include<stdio.h>
int main(){
	FILE*wProm,*Read;
	char matri[10],nota[20];
	float cali,prom;
	int i;
	if((wProm=fopen("listado.txt", "a"))==NULL){
		printf("error abrindo el archivo");
		return 1;
	}
	if((Read=fopen("listado.txt","r"))==NULL){
		printf("error abriendo el archivo");
		return 1;
	}
	for(i=0,prom=0;fscanf(Read,"%s%f%s",matri,&cali,nota)==3;i++){
		printf("trabajando");
		prom+=cali;
	}			
	fprintf(wProm,"\n%f",prom/i);
	fclose(wProm);
	fclose(Read);
	return 0;
}*/
/*#include<stdio.h>
int main(){
	FILE *cal, *lista;
	char matricula[15];
	int tipo, extra[3];
	float calificacion;
	if((cal= fopen("califi.txt","r"))==NULL){
		printf("error abrindo el archivo");
		return 1;
	}
	if((lista= fopen("listado.txt","w"))==NULL){
		printf("error abrindo el archivo");
		return 1;
	}
	while(fscanf(cal,"%s %d %d %d %d %f", matricula, &tipo, &extra[0], &extra[1], &extra[2],&calificacion)==6){
		fprintf(lista, "%s %f",matricula,calificacion);
		if(calificacion<5)
			fprintf(lista,"\tsuspenso\n");
		else if(calificacion>=5 && calificacion<7)
			fprintf(lista,"\taprobado\n");
		else if(calificacion>=7 && calificacion<9)
			fprintf(lista,"\tnotable\n");
		else if(calificacion>=9 && calificacion<10)
			fprintf(lista,"\tsobresaliente\n");
		else if(calificacion==10)
			fprintf(lista,"\tmatricula\n");
			
	}
	fclose(cal);
	fclose(lista);
	return 0;
}*/

/*#include <stdio.h>

#define TAM 16

int main() {
    FILE *fEntrada, *fModelo1, *fModelo2;
    char entrada[TAM]="notas.txt", modelo1[TAM]="modelo1.csv", modelo2[TAM]="modelo2.csv", dni[TAM];
    int modelo;
    double nota;
   
    if ((fEntrada = fopen(entrada, "r")) == NULL) {
        printf("Error abriendo el archivo %s.\n", entrada);
        return 1;
    }

    if ((fModelo1 = fopen(modelo1, "w")) == NULL) {
        printf("Error abriendo el archivo %s.\n", modelo1);
        fclose(fEntrada);
        return 1;
    }

    if ((fModelo2 = fopen(modelo2, "w")) == NULL) {
        printf("Error abriendo el archivo %s.\n", modelo2);
        fclose(fEntrada);
        fclose(fModelo1);
        return 1;
    }

    while (fscanf(fEntrada, "%s %d %lf", dni, &modelo, &nota) == 3) {
        if (modelo == 1)
            fprintf(fModelo1, "%s,%.2lf\n", dni, nota);
        else
            fprintf(fModelo2, "%s,%.2lf\n", dni, nota);
    }

    fclose(fEntrada);
    fclose(fModelo1);
    fclose(fModelo2);

    return 0;
}*/
