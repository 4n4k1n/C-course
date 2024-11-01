#include <stdio.h>
#include <math.h>
int main() {

    double a;
    double b;

    printf("Enter the length of the first side: ");
    scanf("%lf", &a);

    printf("Enter the length of the second side: ");
    scanf("%lf", &b);

    double c = a * a + b * b;
    double final = sqrt(c);

    printf("square of the hypothenuse: %lf\n", final);

    return 0;






}
