//4.Write a program in C to check whether two given strings are an anagram.

//METHOD 1

#include<stdio.h>
#include<string.h>

void sortstring(char st[]){
    int len=strlen(st);
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(st[i]>st[j]){
                char temp=st[i];
                st[i]=st[j];
                st[j]=temp;
            }
        }
    }
}
int isAnagram(char st1[],char st2[]){
    int len1=strlen(st1);
    int len2=strlen(st2);
    if(len1!=len2){
        return 0;
    }
    sortstring(st1);
    sortstring(st2);
    if(strcmp(st1,st2)==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    char st1[100];
    char st2[100];
    printf("Enter string 1:");
    scanf("%s",&st1);
    printf("Enter string 2:");
    scanf("%s",&st2);
    int result=isAnagram(st1,st2);
    if(result){
        printf("Strings are Anagram");
    }
    else{
        printf("Strings are not Anagram");
    }
}


/*
Output:
Enter the first string: spear
Enter the second string: pears
The two strings are anagrams
*/




//METHOD 2


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