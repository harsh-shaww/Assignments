//Write a program to find out Celsius and Fahrenheit value respectively
#include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius_to_fahrenheit(celsius);
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = fahrenheit_to_celsius(fahrenheit);
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}

/*
Output:
Enter temperature in Celsius: 25
Temperature in Fahrenheit: 77.00
Enter temperature in Fahrenheit: 105
Temperature in Celsius: 40.56
*/