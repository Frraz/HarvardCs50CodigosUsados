#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, n;
    char s[20];
    printf("Before: ");
    scanf("%s", s);
    printf("After: ");

    for (i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}