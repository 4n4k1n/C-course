#include <stdio.h>

int main() {
    char grade;

    printf("Enter your grade: ");
    scanf("%c", &grade);

    switch (grade) {
        case 'A':
            printf("You did perfect!\n");
            break;
        case 'B':
            printf("You did great!\n");
            break;
        case 'C':
            printf("You did good!\n");
            break;
        case 'D':
            printf("You passed!\n");
            break;
        case 'F':
            printf("You failed!\n");
            break;
        default:
            printf("You have to pass in a valid grade!\n");
            break;
    }

    return 0;
}
