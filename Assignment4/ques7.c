//Write a function that takes a list and returns a new list with unique elements of the first list. 

#include <stdio.h>
#include <stdbool.h>

#define MAX_LEN 100

int new_list[MAX_LEN];

int add_unique(int list[], int len) {
    int i, j, k = 0;
    bool flag;
    for (i = 0; i < len; i++) {
        flag = true;
        for (j = 0; j < k; j++) {
            if (new_list[j] == list[i]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            new_list[k++] = list[i];
        }
    }
    return k;
}

int main() {
    int list[MAX_LEN];
    int len, i, unique_len;

    // Input the list
    printf("Enter the length of the list: ");
    scanf("%d", &len);
    printf("Enter the elements of the list: ");
    for (i = 0; i < len; i++) {
        scanf("%d", &list[i]);
    }

    // Call the function to get the new list with unique elements
    unique_len = add_unique(list, len);

    // Print the new list
    printf("The new list with unique elements is: ");
    for (i = 0; i < unique_len; i++) {
        printf("%d ", new_list[i]);
    }
    printf("\n");

    return 0;
}


/*
Output:
Enter the length of the list: 6     
Enter the elements of the list: 1 2 2 3 4 4
The new list with unique elements is: 1 2 3 4
*/