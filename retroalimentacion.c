#include<stdio.h>
 
void capturar_enteros(){
	int enteros[5], i;
	float promedio;
	int suma = 0;
	for(i=0;i<5;i++)
	{
		scanf("%i",&enteros[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%i\n", enteros[i]);
	}
	for(i=0;i<5;i++)
	{
		suma = suma + enteros[i]; // suma+=enteros[i]
	}
	printf("Suma: %i\n", suma);
	printf("Promedio: %f\n", suma/5.0);
}
void mostrar(int n, char cadena[])
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s \n", cadena);
	}
}
int main(){
	char op;
	char cadena[20];
	int n;
	
	do
	{	system("cls");
		printf("1) Capturar enteros\n");
		printf("2) Mostrar cadena n veces\n");
		printf("3) Agregar personaje\n");
		printf("0) salir\n");
		scanf("%c", &op);
		fflush(stdin);
		 
		switch(op)
		{
			case '1':
				capturar_enteros();
				system("pause");
				break;
			case '2':
				printf("Escribe una cadena de hasta 20 caracteres: ");
				fflush(stdin); gets(cadena);
				printf("n: ");
				scanf("%i", &n);
				mostrar(n, cadena);
				system("pause");
				break;
			case '3':
				break;
			default:
				break;
		}
	}
	while(op != '0');
	
	return 0;
}
