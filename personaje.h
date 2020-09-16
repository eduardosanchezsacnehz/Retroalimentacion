#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<stdio.h>

struct personaje
{
    char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;
}personajes[5];

unsigned int cont = 0;
void capturar_personajes(){
    if(cont < 5){
        printf("Nombre: "); fflush(stdin);
        gets(personajes[cont].nombre);
        printf("Tipo: "); fflush(stdin);
        gets(personajes[cont].tipo);
        printf("Fuerza: ");
        scanf("%f",&personajes[cont].fuerza);
        printf("Salud: ");
        scanf("%i",&personajes[cont].salud);
        cont++;
    }
    else
    {
        printf("Arrelgo de personajes está lleno");
    }
}

void mostrar_personajes(){
	int i;
    for ( i = 0; i < cont; i++)
    {
        printf("Nombre: %s\n", personajes[i].nombre);
        printf("Tipo: %s\n", personajes[i].tipo);
        printf("Fuerza: %f\n", personajes[i].fuerza);
        printf("Salud: %i\n", personajes[i].salud);
    }  
}

#endif 
