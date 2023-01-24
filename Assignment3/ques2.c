//2.Write a program to swap using and without using third variable
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    // Swap using temporary variable
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);

    // Swap without using temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

/*
Enter value of a: 10
Enter value of b: 5
After swapping: a = 5, b = 10
After swapping: a = 10, b = 5
*/