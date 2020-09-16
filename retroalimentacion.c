#include<stdio.h>

int main(){
	char op;
	
	do
	{
		printf("1) Capturar enteros\n");
		printf("2) Mostrar cadena n veces\n");
		printf("3) Agregar personaje\n");
		printf("0) salir\n");
		scanf("%c", &op);
	}
	while(op != '0');
	
	return 0;
}
