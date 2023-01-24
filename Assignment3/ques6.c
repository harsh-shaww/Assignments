//Write a program to find out a Armstrong or not.
#include <stdio.h>
int main()
{
    int n, temp, r, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    temp = n;
    while (temp != 0)
    {
        // remainder contains the last digit
        r = temp % 10;
        result += r * r * r;
        // removing last digit from the orignal number
        temp /= 10;
    }
    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);
    return 0;
}

/*Output:
Enter a three-digit integer: 121
121 is not an Armstrong number.
*/