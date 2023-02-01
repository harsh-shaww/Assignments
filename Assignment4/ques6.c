//Write a function that accepts a string and calculate the number of upper case letters and lower case letters.

#include <stdio.h>
#include <ctype.h>

void count_cases(const char str[], int *upper, int *lower) {
    int i;
    for (i = 0; str[i]; i++) {
        if (isupper(str[i])) {
            (*upper)++;
        } else if (islower(str[i])) {
            (*lower)++;
        }
    }
}

int main() {
    char str[100];
    int upper = 0, lower = 0;

    printf("Enter the string: ");
    scanf("%[^\n]%*c", str);

    count_cases(str, &upper, &lower);

    printf("Upper case letters: %d\n", upper);
    printf("Lower case letters: %d\n", lower);

    return 0;
}

/*
Output:
Enter the string: The Box of Candy
Upper case letters: 3
Lower case letters: 10
*/
