#include <stdio.h>
#include <string.h>


typedef struct
{
    char name[50];
    char number[20];
} person;


int main(void)
{
    person people[2];

    strcpy(people[0].name, "Brian");
    strcpy(people[0].number, "+1-617-495-1000");

    strcpy(people[1].name, "David");
    strcpy(people[1].number, "+55-94-99209-3253");

    // const char *names[] = {"Brian", "David"};
    // const char *numberes[] = {"+1-617-495-1000", "+55-94-99209-3253"};
    // int i = 0;

    int i = 0;
    for(i = 0; i < 2; i++)
    {
        if(strcmp(people[i].name, "David")==0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}  