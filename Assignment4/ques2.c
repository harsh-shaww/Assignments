//2.Write a function to multiply all the numbers in a list

#include<stdio.h>

int multiply(int list[],int size){
    int result=1;
    for(int i=0;i<size;i++){
        result*=list[i];
    }
    return result;
}
int main(){
    int size;
    printf("Enter the number of elements in list:");
    scanf("%d",&size);
    int list[100];
    for(int i=0;i<size;i++){
        printf("Enter the element %d:",i+1);
        scanf("%d",&list[i]);
    }
    int answer=multiply(list,size);
    printf("Multiplication:%d",answer);
    return 0;
}

/*
Output:
Enter the number of elements in list:4
Enter the element 1:3
Enter the element 2:2
Enter the element 3:4
Enter the element 4:5
Multiplication:120
*/