//3.Write a function to check whether a number is perfect or not.

#include<stdio.h>
int isperfect(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0)
        sum+=i;
    }
    return(sum==num);
}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int result=isperfect(num);
    if(result)
    printf("%d is a perfect number\n",num);
    else
    printf("%d is not a perfect number\n",num);
    return 0;
}

/*
Output:
Enter the number:6
6 is a perfect number
*/