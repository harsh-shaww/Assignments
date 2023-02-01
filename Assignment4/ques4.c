//4.Write a program in C to check whether two given strings are an anagram.

#include <stdio.h>
#include <string.h>

int isAnagram(char str1[], char str2[]) {
    int i, len1 = strlen(str1), len2 = strlen(str2), frequency[26] = {0};
    if (len1 != len2) {
        return 0;
    }
    for (i = 0; i < len1; i++) {
        frequency[str1[i] - 'a']++;
        frequency[str2[i] - 'a']--;
    }
    for (i = 0; i < 26; i++) {
        if (frequency[i] != 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    int result = isAnagram(str1, str2);

    if (result) {
        printf("The two strings are anagrams\n");
    } else {
        printf("The two strings are not anagrams\n");
    }

    return 0;
}

/*
Output:
Enter the first string: spear
Enter the second string: pears
The two strings are anagrams
*/