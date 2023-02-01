//8.Write a program to print the even numbers from a given list.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The even number from the list are:");
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}

/*
Output:
Enter the number of elements in array:5
Element 1:7
Element 2:4
Element 3:3
Element 4:6
Element 5:2
The even number from the list are:4 6 2
*/