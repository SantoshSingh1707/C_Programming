// ==========================================>ERROR<==============================
//To find product in array
/*
#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
    int result=1;
        int temp=1;
        for(int j=0;j<size;j++){
            temp=temp*arr[j];
        }
        result=temp/arr[i];
        arr[i]=result;
    }
    for(int i=0;i<size;i++){
        printf("%d \n",arr[i]);
    }
    
    return 0;
}
*/

//Write a c program for reversing the string
/*
#include <stdio.h>

int main(){
    int a;
    int rev=0;
    printf("Enter the number :");
    scanf("%d",&a);
    while(a!=0){
        rev=rev*10+a%10;
        a=a/10;
    }
    printf("After reversing the number %d",rev);
    return 0;
}
*/

// ==========================================>ERROR<==============================
//write the program to find the given number is a armstrong number 
/*

#include<stdio.h>
#include <math.h>
int main(){
    int num=153;
    int temp1=num;
    int temp=num;
    int i=0;
    int size=sizeof(num)/sizeof(int);
    int result=0;
    while(temp1!=0){
        temp=temp/10;
        i++;
    }
    while(temp!=0){
        int s=temp%10;
        result=result+pow(s,i);
        temp=temp/10;
    }
    if(result==num){
        printf("%d\n",num);
        printf("%d\n",result);
        printf("Armstrong number");
    }
    else{
        printf("%d\n",num);
        printf("%d\n",result);
        printf("Not an armstrong number");
    }
    return 0;
}
*/

//Write a c program to check wether the given number is prime number or composite number
/*
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number =>");
    scanf("%d",&num);
    while (1)
    {
       if(num==2||num==3||num==7||num==5||num==11){
        printf("The given number is prime number \n");
        // break;
       } 
    if(num%2==0||num%3==0||num%5==0||num%7==0||num%11==0){
        printf("The given number is a composite number \n");
        break;
    }
    else{
        printf("The number is prime number\n");
        break;
    }
    }
    
}
*/

//write a c program to print the fibonacci series
/*
#include <stdio.h>
int main(){
    int num;
    printf("Enter the number till where u want to print series => ");
    scanf("%d",&num);
    int f=0,s=1,r=0;
    printf("0\n1\n");
    for(int i=1;i<num;i++){
        r=f+s;
        f=s;
        s=r;
        printf("%d \n",r);
    }    
    return 0;
}

*/

//To find the given number is palindrome or not
/*
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number you want to check =>");
    scanf("%d" ,&num);
    int temp=num,n,reverse=0;
    while(temp!=0){
        reverse=reverse*10+temp%10;
        temp=temp/10;
    }
    if(reverse==num){
        printf("The given number is palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    return 0;
}

*/

//Write a program to check wether the given greatest number between three number
/*
#include <stdio.h>  
int main(){
    int n1,n2,n3;
    printf("Enter three number => ");
    scanf("%d,%d,%d",&n1,&n2,&n3);
    if(n1>n2&&n1>n3){
        printf("N1 is the greatest");
    }
    else if(n2>n1&&n2>n3){
        printf("N2 is the greatest");
    }
    else{
        printf("N3 is the greatest");
    }
    return 0;
}
*/

//write a program to find the sum of all digit in the number 
/*
#include <stdio.h>

int main(){
    int num=12345;
    int temp=num,result=0;
    while (temp!=0)
    {
        result=result+temp%10;
        temp=temp/10;
    }
    printf("The sum of the digit of given number %d is %d ",num,result );
    return 0;
}
*/

//Write a program to swap the variable without third variable
/*
#include <stdio.h>
int main(){
    int a=5,b=6;
    printf("Number befor swapping a=%d,b=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Number after swapping a=%d,b=%d \n",a,b);
    return 0;
}
*/

// =========================================>TO LEARN<===================================
//Write a program to find the prime factors of a the variable
/*
#include <stdio.h>
#include<math.h>

int main(){
    int i,n=6;
    while (n%2==0)  
    {
        printf("%d, ",2);
        n=n/2;
    }
    for(i=3;i<=sqrt(n);i=i+2){
        while (n%i==0)
        {
            printf("%d, ",i);
            n=n/i;
        }
        
    }
    if(n>2){
        printf("%d",n);
    }

    return 0;
}
*/

//write a c program to add two number without + operator
/*
#include <stdio.h>
int main(){
    int num1=100;
    int num2=50;
    for(int i=1;i<=num2;i++){
        num1++;
    }
    printf("%d",num1);
    return 0;
}
*/

// ===========================================>Error<==================================
//Write a program to check wether the given number is a perfect number or not
/*
#include <stdio.h>
#include<math.h>

int main(){
    int i,n=6,i1=0,i2=0;
    int temp;
    while (n%2==0)  
    {
        printf("%d, ",2);
        n=n/2;
        i1=i1+2;
    }
    for(i=3;i<=sqrt(n);i=i+2){
        while (n%i==0)
        {
            printf("%d, ",i);
            n=n/i;
            i2=i2+i;
        }
    }
    if(n>2){
        printf("%d",n);
    }
    temp=i1+i2;
    printf("\nhello %d",temp);
    // if(==n){
    //     printf("It is a perfect number");
    // }

    return 0;
}
*/


// ==============================>RUN ERROR<================================
//find the average of the numbers
/*
#include <stdio.h>
int main(){
    int n,sum=0;
    float avg;
    printf("Enter the total number u want to enter =>");
    scanf("%d",&n);
        int num;
    for(int i=1;i<=n;i++){
        printf("Enter the number =>");
        scanf("%d",&num);
        sum+=num;
    }
    printf("\n%d\n",sum);
    avg=sum/n;
    printf("Average of the number are %.2f",avg);
    return 0;
}
*/

//Write a program to find the factorial of the given number
/*
#include <stdio.h>
int main(){
    int num,fact=1;
    printf("Enter the number =>");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("Factorial of the given number is %d",fact);
    return 0;
}
*/

//C program to check given number is odd or even
/*

#include <stdio.h>
int odd_even(int num){
    if(num%2==0){
        printf("The given number is even");
    }
    else{

        printf("The given number is odd");
    }
}
int main(){
    int num;
    printf("Enter the number =>");
    scanf("%d",&num);
    odd_even(num);
    return 0;
}
*/

//Write a C program to print First n Prime number
/*
#include <stdio.h>
int main(){
    int num=100, n=0,value=0;
    while (n!=num+1)
    {
        if(value==2||value==3||value==5||value==7||value==11){
            printf("%d,\t",value);
        }
        else if(value %2==0||value%3==0||value%5==0||value%7==0||value%11==0){
        }
        else{
            printf("%d,\t",value);
            n++;
        }
            value++;
    }
    
    return 0;
}
*/

//Write a c program to print a prime number i a given range
/*
#include <stdio.h>
int main(){
    int min,max;
    printf("Enter the range =>");
    scanf("%d,%d",&min,&max);
    while(min!=max){
        if(min==2||min==3||min==5||min==7||min==11){
            printf("%d,\t",min);
        }
        else if(min %2==0||min%3==0||min%5==0||min%7==0||min%11==0){
        }
        else{
            printf("%d,\t",min);
        }
            min++;
        
    }
    return 0;
}
*/

//Write a C program to print the smallest number among three
/*
#include <stdio.h>
int main(){
    int n1=5,n2=23,n3=49;
    if(n1<n2&&n1<n3){
        printf("The Smallest number is %d",n1);
    }
    else if (n2<n1&&n2<n3)
    {
        printf("The Smallest number is %d",n2);     
    }
    else{
        printf("The Smallest number is %d",n3);
    }
    return 0;
}
*/

//Calculate the power using the pow function
/*
#include <stdio.h>
int power(int num,int pow){
    int product=1;
    for(int value=1;value<=pow;value++){
        product=product*num;
    }
    printf("%d",product);
    return 0;
}
int main(){
    int num=10,pow=5;
    power(num,pow);
    return 0;
}
*/


//Calculate the power without using the pow function
/*
#include <stdio.h>
#include <math.h>
int main(){
    int num=2;
    int power=5;
    printf("%d",pow(num,power));
    return 0;
}
*/

//C program to calculate the square and Cube
/*
#include <stdio.h>
#include <math.h>
int square(int num){
    printf(" %.0f ",pow(num,2));
}
int cube(int num){

    printf(" %.0f ",pow(num,3));
}
int main(){
    int num;
    printf("Enter the number =>");
    scanf("%d",&num);
    square(num);
    cube(num);
    return 0;
}
*/

//Calculate the square root of the function
/*
#include <stdio.h>
#include <math.h>
int main(){
    int num=45;
    printf("%.2f",sqrt(num));
    return 0;
}
*/

// ===============================>TO ASK<============================
//LCM of n number
/*
#include <stdio.h>
int main(){
    // int n;
    // printf("Enter the total number u want to enter");
    int arr[]={2,5,7,4,10};
    int value=1;
    while(1){
        if(value%arr[0]==0&&value%arr[1]==0&&value%arr[2]==0&&value%arr[3]==0&&value%arr[4]==0){
            printf("%d is LCM",value);
            break;
        }
        value++;
    }
    return 0;
}
*/

//Write a C Program to Convert Decimal into Binary
/*
#include <stdio.h>
int main(){
    int num;int arr[10],i;
    printf("Enter the Number =>");
    scanf("%d",&num);
        for( i=0;i<10;i++){
            arr[i]=num%2;
            num=num/2;
            if(num==0){
                break;
            }
        }
        for(int j=i;j>=0;j--){
            printf("%d ",arr[j]);
        }
    
    return 0;
}
*/


//Finding elemnt in array
/*
#include <stdio.h>
int main(){
    int arr[]={1,2,42,34,2,43,234342,34,52,4324,4,323,3,3,43,43,43,43};
    int num=43,count=0;
    int size=sizeof(arr)/sizeof(int);
    // printf("%d",size);
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            count++;
        }
    }
    printf("Noumber of time %d present in array is %d",num,count);
    return 0;
}
*/

//Write a C program to Convert Decimal to Octal
/*
#include <stdio.h>
int main(){
    int n=200;
    int octal[10];
    int i;
    for(i=0;i<10;i++){
        octal[i]=n%8;
        n=n/8;
        if(n==0){
            break;
        }
    }
    for(int j=i;j>=0;j--){
        printf("%d ",octal[j]);
    }
    return 0;
}
*/

//Write the c Program to Find the GDC/HCF of the Number
/*
#include <stdio.h>
int main(){
    int num1=60,num2=75,hcf;
    int max;
    if(num1<num2){
        max=num2;
    }
    else{
        max=num1;
    }
    for(int i=1;i<max;i++){
            if(num1%i==0 && num2%i==0){
                hcf=i;
            }
    }
    printf("HCF is %d ",hcf);
    return 0;
}
*/

//Write a C code to Convert Celcius To Fahrenheit
/*
#include <stdio.h>
int main(){
    float Celcius=11,Fahrenheit;
    Fahrenheit=(Celcius*9/5)+32;
    printf("%.2f Celcius in Fahrenheit is %.2f ",Celcius,Fahrenheit);
    return 0;
}
*/

//Write a C Code to convert Fahrenheit to Celcius
/*
#include <stdio.h>
int main(){
    float Celcius,Fahrenheit=98;
    Celcius=((Fahrenheit-32)*5)/9;
    printf("%.2f Fahrenheit is %.2f Celcius",Fahrenheit,Celcius);
    return 0;
}
*/

//Write a C Code to Calculate the Simple Intrest
/*
#include <stdio.h>
int main(){
    float rate=3.5,time=3,principle=50000,SI;
    SI=(principle*rate*time)/100;
    printf("%.2f",SI);
    return 0;
}
*/
