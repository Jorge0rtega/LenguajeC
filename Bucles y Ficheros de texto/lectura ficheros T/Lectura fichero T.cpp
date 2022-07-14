#include<stdio.h>
int main(){
	FILE *notas;
	char identificador[10];
	int tipo, fallos ,aciertos, rBlanco,i,cont1,cont2;
	float calificacion, media1, media2;
	notas= fopen("download.txt", "r");
	if(notas==NULL){
		printf("no se encontro el archivo en la carpeta\n");
		return 1;
	}
	for(i=0, media1=.0, media2=.0,cont1=0,cont2=0;fscanf(notas,"%s %d %d %d %d %f", identificador, &tipo, &aciertos, &fallos, &rBlanco, &calificacion)==6;i++){
		if(tipo==1){
			media1+=calificacion;
			cont1++;
		}
		if(tipo==2){
			media2+=calificacion;
			cont2++;
		}			
	}
	printf("\nLa nota media del modelo 1 es: %f",media1/cont1);
	printf("\nLa nota media del modelo 2 es: %f",media2/cont2);
	fclose(notas);
	return 0;
}

/*#include <stdio.h>
int main(){
	FILE *f;
	char dni[10];
	int modelo,i;
	double nota, media;
	f= fopen("notas.txt", "r");
	if(f==NULL){
		printf("error abriendo el archivo\n");
		return 1;
	}
	for(i=0, media=.0;fscanf(f, "%s", dni)==1;i++){
		fscanf(f,"%d",&modelo);
		fscanf(f,"lf",&nota);
		media+=nota;
	}
	printf("la nota media es = %.2lf\n",media/i);
	fclose(f);
	return 0;
	
}*/
