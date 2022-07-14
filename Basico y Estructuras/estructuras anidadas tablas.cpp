#include <stdio.h>

typedef struct {
	char campeon[128];
	int asesinatos,muertes,asistencias;
}juego;
typedef struct{
	char usuario[128];
	juego jugador[3];
}invocador;

int main() {
    invocador jugador1[2];
   	float KDA1[2], KDA2[2], totalKDA[2];
   	//jugador 1
   	printf("Datos del primer jugador\n");
   	printf("\ncual es tu nombre de usuario: ");
    gets(jugador1[0].usuario);
   	printf("Primera partida");
   	printf("\nnombre del campeon: ");
   	gets(jugador1[0].jugador[0].campeon);
   	printf("\nasesinato: ");
   	scanf("%d",&jugador1[0].jugador[0].asesinatos);
   	printf("\nmuertes: ");
   	scanf("%d",&jugador1[0].jugador[0].muertes);
   	printf("\nasistencias: ");
   	scanf("%d",&jugador1[0].jugador[0].asistencias);
   	KDA1[0]=(jugador1[0].jugador[0].asistencias+jugador1[0].jugador[0].asesinatos)/float(jugador1[0].jugador[0].muertes);
	
	printf("Segunda partida");
   	printf("\nnombre del campeon: ");
   	gets(jugador1[0].jugador[1].campeon);
   	printf("\nasesinato: ");
   	scanf("%d",&jugador1[0].jugador[1].asesinatos);
   	printf("\nmuertes: ");
   	scanf("%d",&jugador1[0].jugador[1].muertes);
   	printf("\nasistencias: ");
   	scanf("%d",&jugador1[0].jugador[1].asistencias);
   	KDA1[1]=(jugador1[0].jugador[1].asistencias+jugador1[0].jugador[1].asesinatos)/float(jugador1[0].jugador[1].muertes);
    
    printf("Tercera partida");
   printf("\nnombre del campeon: ");
   	gets(jugador1[0].jugador[2].campeon);
   	printf("\nasesinato: ");
   	scanf("%d",&jugador1[0].jugador[2].asesinatos);
   	printf("\nmuertes: ");
   	scanf("%d",&jugador1[0].jugador[2].muertes);
   	printf("\nasistencias: ");
   	scanf("%d",&jugador1[0].jugador[2].asistencias);
   	KDA1[2]=(jugador1[0].jugador[2].asistencias+jugador1[0].jugador[2].asesinatos)/float(jugador1[0].jugador[2].muertes);
   	totalKDA[0]= (KDA1[0]+KDA1[1]+KDA1[2])/3;
    printf("nombre de usuario %s, campeon %s, tu KDA total es: %f",jugador1[0].usuario,jugador1[0].jugador[2].campeon,totalKDA[0]);
    
    //jugador 2
    printf("Datos del primer jugador\n");
   	printf("\ncual es tu nombre de usuario: ");
    gets(jugador1[1].usuario);
   	printf("Primera partida");
   	printf("\nnombre del campeon: ");
   	gets(jugador1[1].jugador[0].campeon);
   	printf("\nasesinato: ");
   	scanf("%d",&jugador1[1].jugador[0].asesinatos);
   	printf("\nmuertes: ");
   	scanf("%d",&jugador1[1].jugador[0].muertes);
   	printf("\nasistencias: ");
   	scanf("%d",&jugador1[1].jugador[0].asistencias);
   	KDA2[0]=(jugador1[1].jugador[0].asistencias+jugador1[1].jugador[0].asesinatos)/float(jugador1[1].jugador[0].muertes);
	
	printf("Segunda partida");
   	printf("\nnombre del campeon: ");
   	gets(jugador1[1].jugador[1].campeon);
   	printf("\nasesinato: ");
   	scanf("%d",&jugador1[1].jugador[1].asesinatos);
   	printf("\nmuertes: ");
   	scanf("%d",&jugador1[1].jugador[1].muertes);
   	printf("\nasistencias: ");
   	scanf("%d",&jugador1[1].jugador[1].asistencias);
   	KDA2[1]=(jugador1[1].jugador[1].asistencias+jugador1[1].jugador[1].asesinatos)/float(jugador1[1].jugador[1].muertes);

    printf("Tercera partida");
   printf("\nnombre del campeon: ");
   	gets(jugador1[1].jugador[2].campeon);
   	printf("\nasesinato: ");
   	scanf("%d",&jugador1[1].jugador[2].asesinatos);
   	printf("\nmuertes: ");
   	scanf("%d",&jugador1[1].jugador[2].muertes);
   	printf("\nasistencias: ");
   	scanf("%d",&jugador1[1].jugador[2].asistencias);
   	KDA2[2]=(jugador1[1].jugador[2].asistencias+jugador1[1].jugador[2].asesinatos)/float(jugador1[1].jugador[2].muertes);
   	totalKDA[1]= (KDA2[0]+KDA2[1]+KDA2[2])/3;
    printf("nombre de usuario %s, campeon %s, tu KDA total es: %f",jugador1[1].usuario,jugador1[1].jugador[2].campeon,totalKDA[1]);

    return 0;
}

/* AFUERA
#include <stdio.h>

#define MAX_STR 128

typedef struct {
    char autor[MAX_STR];
    char titulo[MAX_STR];
    int anyo;
} Libro;

int main () {
    Libro novela = {"Mario Vargas Llosa", "El héroe discreto", };
    
    printf("Introduzca el año de publicación de %s, de %s: ", novela.titulo, novela.autor);
    scanf("%d", &novela.anyo);

    printf("%s fue escrito por %s en %d.\n", novela.titulo, novela.autor, novela.anyo);   
    return 0;
}*/
