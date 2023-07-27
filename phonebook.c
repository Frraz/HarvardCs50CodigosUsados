#include <stdio.h>
#include <string.h>


typedef struct phonebook
{
    
};


int main(void)
{
    const char *names[] = {"Brian", "David"};
    const char *numberes[] = {"+1-617-495-1000", "+55-94-99209-3253"};
    int i = 0;

    for(i = 0; i < 2; i++)
    {
        if(strcmp(names[i], "David")==0)
        {
            printf("Found %s\n", numberes[i]);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}  