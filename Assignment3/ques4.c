//Write a program to obtain factorial of number
#include <stdio.h>

int main() {
    int num, i, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d: %d\n", num, factorial);

    return 0;
}

/*
Output:
Enter a number: 5
Factorial of 5: 120
*/