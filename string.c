#include <stdio.h>
#include <string.h>


int main(void)
{
    int i;
    char s[20];
    printf("Input: ");
    scanf("%s", s);
    printf("Output: ");
    for (i = 0; i < strlen(s); i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}