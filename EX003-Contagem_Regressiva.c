#include <stdio.h>
#include <stdlib.h>

int main(){

	// Declaração de variáveis
	int valorInicial;

	// Entrada de dados
	printf( "Digite o valor da qual a contagem deve ser iniciada: " );
	scanf( "%d", &valorInicial );
	// Limpeza de Buffer
	setbuf( stdin, NULL );


	// Início do Loop
	while( valorInicial > 0 ){
		// Mostrando os valores na tela
		printf( "%d\n", valorInicial );

		// Decrementando o contador
		valorInicial--;
	}

	return 0;
}
