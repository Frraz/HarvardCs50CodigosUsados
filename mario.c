// #include <stdio.h>

// int main(void)
// {
//     int n;
//     do
//     {
//         printf("Digite um valor para a largura: ");
//         scanf("%i", &n);
//     } while (n < 1);
    
//     for (int i = 0; i < n; i++)
//     {
//         printf("?");
//     }
//     printf("\n");
// }

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}