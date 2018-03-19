#include <stdio.h>
#include <stdlib.h>

int main(){

	// Declaração das variáveis
	float celsius;
	float fahrenheit;

	// Entrada dos dados
	printf( "Digite a temperatura em Celsius: " );
	scanf( "%f", &celsius );
	// Limpeza de Buffer
	setbuf( stdin, NULL );

	// Convertendo a temperatura
	fahrenheit = ( celsius * 1.8 ) + 32;

	// Saída do programa
	printf( "Temperatura em Fahrenheit: %.2f\n", fahrenheit );

	return 0;
}
