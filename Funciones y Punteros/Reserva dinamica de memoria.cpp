#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int dia;
    int mes;
    int anyo;
} Fecha;

Fecha comparadorFechasMenor(Fecha fecha1,Fecha fecha2){
	/* Cálculo de la fecha más antigua 
    for (i=1, mas_antigua=0; i<dim; i++) {
        if (fechas[i].anyo < fechas[mas_antigua].anyo)
            mas_antigua = i;
        else if (fechas[i].anyo == fechas[mas_antigua].anyo) {
            if (fechas[i].mes < fechas[mas_antigua].mes)
                mas_antigua = i;
            else if ( (fechas[i].mes == fechas[mas_antigua].mes) && (fechas[i].dia < fechas[mas_antigua].dia) )
                mas_antigua = i;
        }
    }*/
	if(fecha1.anyo<fecha2.anyo)
		return fecha1;
	else if (fecha1.anyo>fecha2.anyo)
		return fecha2;
	else if(fecha1.mes<fecha2.mes) 
		return fecha1;
	else if(fecha1.mes>fecha2.mes)
		return fecha2;
	else if(fecha1.dia<fecha2.dia)
		return fecha1;
	else if(fecha1.dia>fecha2.dia)
		return fecha2;
		
	if (fecha1.anyo==fecha2.anyo)	
		if(fecha1.mes==fecha2.mes)		
	 		if(fecha1.dia==fecha2.dia)	
				return fecha1;	
}

int main(){
	Fecha *fechas,fechaMen;
	int i, dim;
	printf("cuantas fechas quieres comparar: ");
	scanf("%d",&dim);
	fechas=(Fecha*)malloc(dim*sizeof(Fecha));
	if(fechas==NULL){
		printf("la reserva de memoria ha fallado");
		return 1;
	}
	for(i=0;i<dim;i++){
		printf("intruduce el dia de la fecha %d: ",i+1);
		scanf("%d",&fechas[i].dia);
		printf("introduce el mes de la fecha %d: ",i+1);
		scanf("%d",&fechas[i].mes);
		printf("introduce el anyo de la fecha %d: ",i+1);
		scanf("%d",&fechas[i].anyo);		
		if(i==1){
			fechaMen=comparadorFechasMenor(fechas[i],fechas[i-1]);				
		}
		if(i>1){
			fechaMen=comparadorFechasMenor(fechaMen,fechas[i]);				
		}
		
	}
	printf("la fecha mas antigua es: %d / %d / %d",fechaMen.dia,fechaMen.mes,fechaMen.anyo);
	free(fechas);
	return 0;
}
/*#include <stdio.h>
#include <stdlib.h>
int main(){
	int num, *memoria, i;
	float media;
	printf("Introduce cuantos enteros se van a leer: ");
	scanf("%d",&num);
	memoria=(int*)malloc(num*sizeof(int));
	if(memoria==NULL){
		printf("la reserva de memoria ha fallado");
		return 1;
	}
	for (i=0, media=0; i<num;i++){
		printf("introduce el numero %d: ",i+1);
		scanf("%d",&memoria[i]);
		media+=memoria[i];
	}
	printf("\nla media de los numero leidos es: %f",media/i);
	free (memoria);
	return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, n, *edades;
	double total=0;
	printf("cuantas personas han acudido a la fiesta: ");
	scanf("%d",&n);
	edades=(int*) malloc(n*sizeof(int));
	if(edades==NULL){
		printf("la reserva de memoria ha fallado");
		return 1;
	}
	for (i=0; i<n; i++){
		printf("dime la edad de la persona %d: ", i+1);
		scanf("%d",&edades[i]);
		total+=edades[i];
	}
	printf("la media de edad de la fiesta es: %.2lf", total/n);
	free(edades);
	return 0;
}*/

