#include <stdio.h>

int numeroPositivo();
int main(void)
{
    int i = numeroPositivo();
    printf("%i\n", i);
}

int numeroPositivo(void)
{
    int n;
    do
    {
        printf("Numero positivo: ");
        scanf("%i", &n);
    } while (n < 1);
    return n;
    
}