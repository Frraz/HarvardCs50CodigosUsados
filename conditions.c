#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Digite um numero: ");
    scanf("%i", &x);
    printf("Digite outro numero: ");
    scanf("%i", &y);

    if(x > y)
    {
        printf("O %i e maior que %i", x, y);
    }
    else if (x < y)
    {
        printf("O %i e menor que %i", x, y);
    }
    else
    {
        printf("Os dois numeros sao iguais.");
    }
}