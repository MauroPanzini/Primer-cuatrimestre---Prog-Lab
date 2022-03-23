/*
Ingresar 10 números enteros, distintos de cero. Mostrar:
a. Cantidad de pares e impares.
b. El menor número ingresado.
c. De los pares el mayor número ingresado.
d. Suma de los positivos.
e. Producto de los negativos.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numero;
	char flag = 't';
	char flagMenor = 't';
	int menorNumero;
	int mayorPar;
	int sumaPositivos = 0;
	int contadorPares = 0;
	int contadorImpares = 0;
	int productoNegativos = 1;
	int contador = 0;

	while(contador < 5){
		printf("Introduzca un número: ");
		scanf("%d", &numero);
		while(numero == 0){
			printf("Error, Introduzca un número diferente de 0: ");
			scanf("%d", &numero);
		}
		if(flagMenor == 't' || menorNumero>numero){
			menorNumero = numero;
			flagMenor = 'f';
		}
		if(numero%2 == 0){
			contadorPares++;
			if(flag == 't'){
				mayorPar = numero;
				flag = 'f';
			}
			else if(numero>mayorPar){
				mayorPar = numero;
			}
		}
		else{
			contadorImpares++;
		}
		if(numero>0){
			sumaPositivos += numero;
		}
		else{
			productoNegativos = numero*productoNegativos;
		}

		contador++;

	}
	printf("\nHay %d numeros pares y %d numeros impares", contadorPares, contadorImpares);
	printf("\nEl menor número ingresado fue: %d", menorNumero);
	printf("\nEl mayor número par fue: %d", mayorPar);
	printf("\nLos positivos suman un total de %d", sumaPositivos);
	printf("\nEl producto de los negativos es %d", productoNegativos);


	return EXIT_SUCCESS;
}
