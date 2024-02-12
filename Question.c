#include <stdio.h>
#include <string.h>
/*
int main(){
    char num[10];
    printf("Enter the number =>");
    scanf("%s",&num);
    int i=strlen(num);
    char arr[i];
    for(int n=0;n<i;n++){
        arr[n]=num[n];
    }
    printf("\n");

    for(int j=0;j<i;j++){
        switch (arr[j])
        {
        case '1':
        printf("one ");
        break;
        case '2':
        printf("two ");
        break;
        case '3':
        printf("three ");
        break;
        case '4':
        printf("four ");
        break;
        case '5':
        printf("five ");
        break;
        case '6':
        printf("six ");
        break;
        case '7': 
        printf("seven ");
        break;
        case '8': 
        printf("eight ");
        break;
        case '9':
        printf("nine ");
        break;
        case '0':
        printf("zero ");
        break;
        default:
            break;
        }
    }
    
    return 0;
}

*/

//Method 2 using int type
/*
int main(){
    int num;
    printf("Enter the number =>");
    scanf("%d",&num);
    int arr[100];
    int i=0;
    int n;
    while(num>0){
        n=num%10;
        arr[i]=n;
        num=num/10;
        i++;
    }
    i=i-1;
    for(i;i>=0;i--){
        switch (arr[i])
        {
        case 1:
        printf("one ");
        break;
        case 2:
        printf("two ");
        break;
        case 3:
        printf("three ");
        break;
        case 4:
        printf("four ");
        break;
        case 5:
        printf("five ");
        break;
        case 6:
        printf("six ");
        break;
        case 7: 
        printf("seven ");
        break;
        case 8: 
        printf("eight ");
        break;
        case 9:
        printf("nine ");
        break;
        case 0:
        printf("zero ");
        break;
        default:
            break;
        }
    }
}
*/

//Coverting binary value to decimal value
/*
#include <stdio.h>
#include <math.h>
int main(){
    int bin;
    printf("Enter the binary number ==>");
    scanf("%d",&bin);
    int emp=bin;
    int temp=bin;
    int ans=0,n=0,i=0;
    while(bin>0){
        n=bin%10;
        ans=ans+(n*(pow(2,i)));
        bin=bin/10;
        i++;
    }
    printf("%d is %d in decimal",emp,ans);
}

*/

// HCF
/*
#include <stdio.h>
int main(){
    int num1=60;
    int num2=75;
    int min;
    if(num1>num2){
        min=num2;
    }
    else{
        min=num1;
    }
    int i=1;
    int ans=1;
    while(i<min){
        if(num1%i==0 && num2%i==0){
            ans=i;
        }
        i++;
    }
    printf("%d of the HCF of the number ",ans);
    return 0;
}

*/


// LCM
/*
#include <stdio.h>
int main(){
    int n1=16;
    int n2=20;
    int i=1;
    while(1){
        if(i%n1==0 && i%n2==0){
            printf("%d is the lcm",i);
            return 0;
        }
    i++;
    }
}
*/


// Bubble Sort 
/*
#include <stdio.h>
int main(){
    int arr[]={100,232,342,42343,42323,43,454543,54,34123,45};
    int size=sizeof(arr)/sizeof(int);
    int temp;
    for(int j=0;j<size;j++){
        for(int i=0;i<size-1;i++){
            if(arr[i]>arr[i+1]){    
              temp=arr[i];
             arr[i]=arr[i+1];
             arr[i+1]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

// Selection Sort
/*
#include <stdio.h>
int main(){
    int arr[]={100,232,342,42343,42323,43,454543,54,34123,45};
    int size=sizeof(arr)/sizeof(int);
    int temp,min;
    for(int i=0;i<size-2;i++){
        for(int j=i+1;j<size-1;j++){
            
        }


    }
     for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
    }
    */
//write acode to convert decimal number to binary number
/*
#include <stdio.h>
int main(){
    int num=50;
    int arr[10];
    int n=0,i=0;
    while(num>0){
        n=num%2;
        arr[i]=n;
        num=num/2;
        i++;
    }
    i=i-1;
    for(i;i>=0;i--){
        printf("%d",arr[i]);
    }
    return 0;
}
*/

//Factorial of the number
/*
#include <stdio.h>
int main(){
    int num=5;
    int fact=1;
    int temp=num;
    while(temp>1){
        fact=fact*temp;
       temp--;
    }
    printf("Factorial of %d is %d ",num,fact);
    return 0;
}

*/

//To checck wether the given number is armstrong or not
/*
#include <stdio.h>
#include <math.h>
int main(){
    int num=9800817;
    int num1=num;
    int another=num;
    int armstrong=0;
        int temp;
        int i=0;
    while (num1>0)
    {
        temp=num1%10;
        num1=num1/10;
        i++;
    }
    
    while(num>0){
        temp=num%10;
        armstrong=armstrong+pow(temp,i);
        num=num/10;
    }
    if(armstrong==another){
        printf("%d is armstrong number",another);
    }
    else{
        printf("%d is not armstrong number",another);

    }
    return 0;
}
*/

//To find the given number is palindrome number
/*
#include <stdio.h>
#include <math.h>
int main(){
    int num=1312131;
    int temp=num;
    int num1;
    int palindrome=0;
    int i=0;
    while (temp>0)
    {
        num1=temp%10;
        temp=temp/10;
        i++;
    }
    temp=num;
    i--;
    // printf("%d  er\n",temp);
    while (temp>0)   
    {
        num1=temp%10;
        palindrome=palindrome+(num1*(pow(10,i)));
        temp=temp/10;
        i--;
    }
    // printf("%d ,%d \n",palindrome,num);
    if(palindrome==num){
        printf("%d is a palindrome number",num);

    }
    else{
        
        printf("%d is not a palindrome number",num);
    }
    return 0;
}
*/

//Write a c program to find the repeating in array
/*
#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,1,4,7,2,4,2,3};
    int size=sizeof(arr)/sizeof(int);
    int i,j,repeat;
    for(i=0;i<size;i++){
            repeat=0;
        for(j=0;j<size;j++){
            if(arr[i]==arr[j]){
                repeat++;
            }
        }
        repeat=repeat-1;
        if(repeat!=0){
            printf("%d is repeated %d times \n",arr[i],repeat+1);
        }
    }
    return 0;
}
*/

//print maximum and minimum
/*
#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,2,5,6,3,2};
    int size=sizeof(arr)/sizeof(int);
    int max=0;
    int max_2;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max_2=max;
            max=arr[i];
        }
    }
    int min=max;
for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d is maximum\n",max);
    printf("%d is minimum\n",min);
    printf("%d is 2nd maximum\n",max_2);
    return 0;
}
*/

//arranging array 1st half accending and 2nd half decending
/*
#include <stdio.h>
int main(){
    int arr[]={11,23,42,16,83,73,59};
    int size=sizeof(arr)/sizeof(int);
    int half=size/2;
    int temp;
    printf("Original array =>\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);

    }
    for(int j=0;j<size;j++){
        for(int i=0;i<size-1;i++){
            if(arr[i]>arr[i+1]){    
              temp=arr[i];
             arr[i]=arr[i+1];
             arr[i+1]=temp;
            }
        }
    }
    printf("\nAfter accending and decending =>\n");
    for(int i=0;i<half;i++){
        printf("%d ",arr[i]);
    }
    for(int i=size-1;i>=half;i--){
        printf("%d ",arr[i]);

    }
   
}

*/

//