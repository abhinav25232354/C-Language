#include <stdio.h>
#include <string.h>

typedef struct{
    char name[1000];
    char number[1000];
} person;

int main (void){
    person people[3];

    strcpy(people[0].name, "John");
    strcpy(people[0].number, "+91-45454-12322");

    strcpy(people[1].name, "Oscar");
    strcpy(people[1].number, "+91-45432-12342");

    strcpy(people[2].name, "William");
    strcpy(people[2].number, "+91-45454-18762");

    char name[1000];
    printf("Enter Name: ");
    scanf("%s", name);
    for (int i=0; i<3; i++){
        if (strcmp(people[i].name, name) == 0){
            printf("%s", people[i].number);
            return 0;
        }
    }
    printf("Not Found");
}