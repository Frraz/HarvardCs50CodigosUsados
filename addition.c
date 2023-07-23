#include <stdio.h>

int main(void)
{   
    long a, b, resultado;
    printf("Digite um numero: ");
    scanf("%li", &a);
    printf("Digite outro numero: ");
    scanf("%li", &b);
    resultado = a + b;

    printf("O resultado e: %li ", resultado);

}