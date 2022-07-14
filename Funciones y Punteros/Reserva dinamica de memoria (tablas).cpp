#include <stdio.h>
#include <stdlib.h>
int main(){
	
}
/*#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, estudiantes, examenes;
	double **notas;
	printf("cuantos estudiantes hay en tu clase: ");
	scanf("%d", &estudiantes);
	printf("cuantos examenes habeis hecho: ");
	scanf("%d", &examenes);
	notas=(double**)malloc(examenes*sizeof(double*));
	if(notas=NULL){
		printf("La reserva de memoria ha fallado");
		return 1;
	}
	for(i=0; i<examenes; i++){
		notas[i]=(double*)malloc(estudiantes*sizeof(double));
		if(notas[i]==NULL){
			for(j=0; j<i;j++)
				free(notas[j]);
			free(notas);
			printf("la reserva de memoria ha fallado");
			return 1;
		}
	}
	//codigo para almacenar las notas de los estudiantes para cada examen
	for (i=0;i<examenes;i++)
		free(notas[i]);
	free(notas);
	return 0;
}*/
