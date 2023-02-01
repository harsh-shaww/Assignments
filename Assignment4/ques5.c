//5.Write a program to reverse a string.

#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter the string: ");
    scanf("%s", str);

    reverse(str);

    printf("The reversed string is: %s\n", str);

    return 0;
}

/*
Output:
Enter the string: spear
The reversed string is: raeps
*/