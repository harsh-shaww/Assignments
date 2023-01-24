//5.Write a program to find Fibonacci series.
#include <stdio.h>
int main()
{
    int i, n, a = 0, b = 1, c;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The first %d terms of the Fibonacci sequence are: ", n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
/*
Output:
Enter the number of terms: 5
The first 5 terms of the Fibonacci sequence are: 0 1 1 2 3
*/