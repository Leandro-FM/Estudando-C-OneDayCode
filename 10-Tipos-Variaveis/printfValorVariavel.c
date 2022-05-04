#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int A = 10;
int main(void)
{
    setlocale(LC_ALL, "");
    printf("\nValor da variavel A = %d\n\n", A);

    return 0;
}
