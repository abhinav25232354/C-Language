#include <stdio.h>
#include <string.h>

void done(){
    int a, b, c, d, reverse;
    int number;
    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    // sum of the digits of a number
    a = number % 10; // 1234
    b = number % 100 / 10; 
    c = number % 1000 / 100;
    d = number % 10000 / 1000;
    printf("%d, %d, %d", a, b, c, d);
    printf("\nSum of digits: %d\n", a + b + c + d);

    // reverse the number
    reverse = a * 1000 + b * 100 + c * 10 + d;
    printf("\nReverse of the number: %d\n", reverse);

    // palindrome
    // check if the number is palindrome or not
    if (number==reverse){
        printf("Number is palindrome\n");
    }
    else{
        printf("Number is not palindrome\n");
    }
}
int main(void){
    // check leap year
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year%4==0) && (year%100!=0) || (year%400==0)) {
        printf("%d is leap year", year);
    }
    else{
        printf("%d is not a leap year", year);
    }
    // else if (year%400==0){
    //     printf("%d is a leap year", year);
    // }
    return 0;
}