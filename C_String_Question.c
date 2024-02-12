//Write a C program to remove any character from a string 
/*
#include <stdio.h>
#include <string.h>
int main(){
    char s[10];
    printf("Enter the String =>");
    fgets(s,10,stdin);
    char c;
    printf("Enter the character you want to remove =>");
    scanf("%c",&c);
    for(int i=0,j=0;i<10;i++){
        if(s[i]!=c){
            s[j++]=s[i];
        }
    }
    printf("%s ",s);
    return 0;
}
*/

//Write a c program to find the occurance of the given character
/*
#include <stdio.h>
#include <string.h>
int main(){
    char str[]="santosh singh";
    int size=sizeof(str)/sizeof(char);
    int count=0;
    char c;
    printf("Enter the character you want to count =>");
    scanf("%c",&c);
    for(int i=0;i<size;i++){
        if(str[i]==c){
            count++;
        }
    }
    printf("%c is %d times ",c,count);
    return 0;
}
*/
// ==============>NOT SOLVED<==========
//Write a C program to find if Anagram
/*
//Anagram ==>If the character with the same occurrence present in both string
*/

//Write a C progra to check wether the string is Palindrome or not
/*
#include <stdio.h>
#include<string.h>
int main(){
    char str[]="akaka";
    int len=strlen(str);
    int temp=0;
    for(int i=0;i<len;i++){
        if(str[i]==str[len-i-1]){
            temp++;
        }
    }
    if(temp==len){
        printf("String is Palindrome");
    }
    else{
        printf("String is not palindrome");
    }
    return 0;
}
*/

//Write a c prgram to check wether the given character is a vowel or consonant
/*
#include <stdio.h>
int main(){
    char str;
    printf("Enter the Character =>");
    scanf("%c",&str);
    if((str>='a'&&str<='z' )||(str>='A'&&str<='Z')){
        if(str=='A'||str=='a'||str=='E'||str=='e'||str=='i'||str=='I'||str=='o'||str=='O'||str=='u'||str=='U'){
            printf("Given character is a Vowel");
        }
        else{
            printf("Given Character is a Consonant");
        }
    }
    else{
        printf("Input is Not a Character");
    }
    return 0;

}
*/

//Write a C program to check whether the Given input is digit or not
/*
#include <stdio.h>
int main(){
    char c;
    printf("Enter the charcater =>");
    scanf("%c",&c);
    if(c>='0'&&c<='9'){
        printf("%c is a string",c);
    }
    else{
        printf("%c is not a string");
    }
    return 0;
}
*/

//Write a c program to changr the given charcter in string into blank spaces
/*
#include <stdio.h>
#include <string.h>
int main(){
    char str[]="positive";
    char c='i';
    int size=strlen(str);
    for(int i=0;i<size;i++){
        if(str[i]==c){
            str[i]='#';
        }
    }
    printf("%s",str);
    return 0;
}
*/

