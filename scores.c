#include <stdio.h>

const int TOTAL = 3;

int main(void)
{
    int scores[TOTAL];
    printf("Digite o número TOTAL de scores: ");
    scanf("%d", TOTAL);
    for (int i = 0; TOTAL < 3; i++)
    {
        printf("Score: ");
        scanf("%d", scores[i]);
    }
    prinf("Avarage: %f\n", avarage(TOTAL, scores));
}

float avarage(int legth, int array[])
{
    int sum = 0;
    for (int i = 0; i < legth; i ++){
        sum += array[i];
    }
    return sum / (float)legth;
}