#include <stdio.h>
#include <stdlib.h>

int main(){

    // Declaração das variáveis
    int a, b;

    // Entrada dos dados
    printf( "Insira dois números inteiros: " );
    scanf( "%d %d", &a, &b );
    // Limpeza de Buffer
    setbuf( stdin, NULL );

    // Saída do programa
    printf( "%d + %d = %d\n", a, b, a + b );

    return 0;
}
