#include <stdio.h>

int main(void)
{
    printf("Qual o seu nome? ");
    char nome[10];
    scanf("%s", nome);
    printf("Hello, %s!\n", nome);
}   