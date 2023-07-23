#include <stdio.h>

int main(void)
{
    float x, y;
    printf("X: ");
    scanf("%f", &x);
    printf("Y: ");
    scanf("%f", &y);

    printf("%.50f\n", x / y);
}