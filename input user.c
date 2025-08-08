#include <stdio.h>

int main() {
    int age;
    float height;
    char gender;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height in feet: ");
    scanf("%f", &height);

    printf("Enter your gender (Male/Female): ");
    scanf(" %c", &gender);  

    printf("\nYou are %d years old.", age);
    printf("\nYour height is %.1f feet.", height);
    printf("\nYour gender is %c", gender);

    return 0;
}

