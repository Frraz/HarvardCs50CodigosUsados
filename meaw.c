#include <stdio.h>

void meaw(int n);
int main(void)
{
   meaw(3);
}
void meaw(int n){
    for (int i = 0; i < n; i++)
    {
        printf("Meaw\n");
    }
}