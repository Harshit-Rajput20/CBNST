#include <stdio.h>
#include <math.h>

void calcPercentage(float actual, float rounded) {
    float percentage = fabs((actual - rounded) / actual) * 100;
    printf("Percentage error = %.5f%%\n", percentage);
}

void calcAbsolute(float n1, float n2) {
    printf("Absolute error = %.5f\n", fabs(n1 - n2));
}

float roundToNDecimalPlaces(float num, int decimalPlaces) {
    float multiplier = pow(10, decimalPlaces);
    return roundf(num * multiplier) / multiplier;
}

int main() {
    float num1, num2;
    printf("Program running successfully\n");
    printf("Enter true value: ");
    scanf("%f", &num1);
    num2 = roundToNDecimalPlaces(num1, 3);
    printf("Rounded Num: %.5f\n", num2);
    calcAbsolute(num1, num2);
    calcPercentage(num1, num2);
    return 0;
}

