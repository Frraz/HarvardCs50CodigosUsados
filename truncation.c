#include <stdio.h>

int main(void)
{
    int x, y;
    printf("Digite um numero: ");
    scanf("%i", &x);
    printf("Digite outro numero: ");
    scanf("%i", &y);
    float z = (float)x / (float)y;
    printf("O resultado e: %f", z);
}