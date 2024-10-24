#include <stdio.h>

int main() {
    char unit;
    float temp;

    printf("Is the temperature in (F) or (C)? ");
    scanf(" %c", &unit);  // Added a space before %c to consume any leftover whitespace

    if (unit == 'C' || unit == 'c') {  // Added case insensitivity
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("The temperature in Fahrenheit is %.1f\n", temp);
    } else if (unit == 'F' || unit == 'f') {  // Added case insensitivity
        printf("Enter the temperature in Fahrenheit: ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("The temperature in Celsius is %.1f\n", temp);
    } else {
        printf("Invalid input. Please enter 'F' or 'C'.\n");
    }

    return 0;
}
