#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int entradaValorVariavel = 0;
float entradaValorVariavel2 = 0.0;

main(void)
{
    setlocale(LC_ALL, "");

    // Lendo valor inteiro
    printf("\nDigite um valor para a variavel: ");
    scanf("\n%d", &entradaValorVariavel);
    printf("Voce digitou:%d\n", entradaValorVariavel);

        //-----------------------------//

    // Lendo valor numero decimal
    printf("\nDigite um valor para a variavel: ");
    scanf("\n%f", &entradaValorVariavel2);
    printf("Voce digitou:%f\n", entradaValorVariavel2);

        //-----------------------------//

    // Lendo valor caracter (char)
    char entradaValorVariavelLetra = " ";
    printf("\nDigite um valor para a variavel: ");
    scanf("\n%c", &entradaValorVariavelLetra);
    printf("Voce digitou:%c\n", entradaValorVariavelLetra);
}
