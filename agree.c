#include <stdio.h>

int main(void)
{
    char c;

    printf("Voce concorda?");
    scanf("%c", &c);
    if (c == 'y' || c == 'Y')
    {
        printf("Concordo.");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Discordo.");
    }
    else
    {
        printf("Alternativa invalida.");
    }
}