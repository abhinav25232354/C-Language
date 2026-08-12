#include <stdio.h>
#include <string.h>

int main(void){
    int number;
    printf("Hello, World!\n");

    printf("Enter a Number: ");
    scanf("%d", &number);
    getchar(); // to clear the buffer before proceeding
    printf("You entered: %d\n", number);

    char str[5000];
    printf("Enter String-1: ");
    // scanf("%s", str); // it only prints upto first whitespace character
    fgets(str, sizeof(str), stdin); // it prints the whole string including the whitespace characters
    printf("You entered: %s\n", str);

    char str2[5000];
    printf("Enter String-2: ");
    fgets(str2, sizeof(str2), stdin);
    printf("You entered: %s\n", str2);
    return 0;
}