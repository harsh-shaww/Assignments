//Write a function that checks whether a passed string is palindrome or not

#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool ispalindrome(char *s){
    int length=strlen(s);
    for(int i=0;i<length/2;i++){
        if(s[i]!=s[length-i-1])
        return false;
    }
    return true;
}
int main(){
    char t[100];
    printf("Enter the string:");
    scanf("%[^\n]%*c",t);
    if(ispalindrome(t)){
        printf("String is palindrome");
    }
    else{
        printf("String is not palindrome");
    }
    return 0;

}

/*
Output
Enter the string:level
String is palindrome
*/