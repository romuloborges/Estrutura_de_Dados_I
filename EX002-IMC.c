#include <stdio.h>
#include <stdlib.h>

int main(){

	// Declaração de variáveis
	float altura, peso;
	float imc;

	// Entrada da altura
	printf( "Insira a sua altura em metros: " );
	scanf( "%f", &altura );
	// Limpeza de buffer
	setbuf( stdin, NULL );


	// Entrada do peso
	printf( "Insira o seu peso em KG: " );
	scanf( "%f", &peso );
	// Limpeza de buffer
	setbuf( stdin, NULL );

	// Cálculo do IMC
	imc = peso / ( altura * altura );

	// Verificação de categoria e saída de dados
	if( imc < 18.5 )
		printf( "Abaixo do peso normal\n" );
	else if( imc < 25 )
		printf( "Peso normal\n" );
	else if( imc < 30 )
		printf( "Sobrepeso\n" );
	else if( imc < 35 )
		printf( "Obesidade grau I\n" );
	else if( imc < 40 )
		printf( "Obesidade grau II\n" );
	else
		printf( "Obesidade grau III\n" );


	return 0;

}
