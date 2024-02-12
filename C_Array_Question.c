// 1) Write a Program to Find Missing Number in an Array
/*
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 103, 104, 15, 16, 17, 18, 19, 20};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 1; i < size; i++)
    {
        if (i + 1 != arr[i])
        {
            printf("%d is Not present in Array\n", i + 1);
        }
    }
    return 0;
}
*/

// 2) Write a C program to find duplicates in Array
/*
#include <stdio.h>
int main()
{
    int arr[] ={1,2,3,2,4,2,5,3,18,19};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
    int count=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j])
            count++;
        }
        printf("%d is %d times repeated\n",arr[i],count-1);
    }
    return 0;
}

*/

// 3) Write the program to Find first duplicate number
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[]={1, 2,3,5,6,7,8,8};
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                printf("%d is duplictae ");
                exit(0);
            }
        }
    }
    return 0;
}
*/

//Write the c program to find which number is not present in second array
/*
#include <stdio.h>
int main(){
    int arr1[]={1,2,3,4,5},arr2[]={2,3,1,4,0};
    int i,j,sum=0;
    for( i=0;i<5;i++){
        sum=sum+arr1[i]-arr2[i];

    }
    if(sum!=0)
    printf("%d is missing in the array 2");
    else{
        printf("Nothing is missing");
    }
    return 0;
}
*/

//Write a c program to fid the given array is equal in size or not
/*
#include <stdio.h>
int main(){
    int arr1[]={1,2,3,4,5},arr2[]={2,3,1,0};
    int size1,size2;
    size1=sizeof(arr1)/sizeof(int);
    size2=sizeof(arr2)/sizeof(int);
    if(size1==size2){
        printf("Both the array are of same size");
    }
    else
    {
        printf("Both the array are not of the same size");
    }
    return 0;
}
*/

//Write a c porgram to find the largest and smallest number in the array
/*
#include <stdio.h>
int main(){
    int arr[]={2,3,4,500,6,-10};
    int small,laregst=0;
    int size=sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        if(arr[i]>laregst){
            laregst=arr[i];
        }
    }
    small=laregst;
    for(int i=0;i<size;i++){
        if(small>arr[i]){
            small=arr[i];
        }
    }
    printf("smallest is %d and largest is %d ",small,laregst);
    return 0;
}
*/

//Write a C program to find the second largest number in array
/*
#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,10,100};
    int size=sizeof(arr)/sizeof(int);
    int first=0,second=0;
    for(int i=0;i<size;i++){
        if(arr[i]>first){
            second=first;
            first=arr[i];
        }
    }
    printf("first largest number is %d\n",first);
    printf("second largest number is %d",second);
    return 0;
}
*/

//Write a c program to print the array in the reverse order
/*
#include <stdio.h>
int main(){
    int arr[]={23,24,5,3,1,2,534};
    int size=sizeof(arr)/sizeof(int);
    for(int i=size-1;i>=0;i--){
        printf("%d\t",arr[i]);
    }
    return 0;
}
*/

//Write a c program to insert the element the array in the last position
/*
#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,0},num;
    int size=(sizeof(arr)/sizeof(int))-1;
    for(int i=size;i>size-1;i--){
        if(arr[i]==0){
            printf("Enter the element =>");
            scanf("%d",&num);
            arr[i]=num;
        }
        else{printf("Stack Overflow\n");}
    }
    for(int i=0;i<size+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

//Write a c program to insert the element in the desired index
/*
#include <stdio.h>
int main(){
    int arr[]={1,2,3,5,6,0};
    int size=(sizeof(arr)/sizeof(int));
    int num=4,index=3;
    for(int i=size-1;i>=index;i--){
        arr[i]=arr[i-1];
        if(i==index){
            arr[i]=num;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ,",arr[i]);
    }
    return 0;
}
*/

//Write a c rpogram to delete the last elemnt from the array
/*
#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    int size=(sizeof(arr)/sizeof(int))-1;
    for(int i=size;i<size-1;i--){
        arr[i]=0;
    }
     for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/


//Write a c program to delete the any element from the array
/*
#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    int index=2;
    int size=(sizeof(arr)/sizeof(int));
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<size-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/

//write a c program to find the sum of the array
/*
#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    printf("Sum of the array is %d",sum);
    return 0;
}
*/

//Write a c program to find all even number in the array
/*
#include <stdio.h>
int even(int arr[],int size){
for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            printf("%d ,",arr[i]);
        }
    }
    printf(" are Even number\n");
}
int odd(int arr[],int size){
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            printf("%d ",arr[i]);
        }
    }
    printf(" are Odd number");
}
int main(){
    int arr[]={2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    even(arr,size);
    odd(arr,size);
    return 0;
}
*/

//Write a C program to merge two Arrays
/*
#include <stdio.h>
int main(){
    int arr1,arr2;
    printf("Enter 1st array size =>");
    scanf("%d",&arr1);
    int array1[arr1];
    for(int i=0;i<arr1;i++){
        printf("Enter  array ");
        scanf("%d",&array1[i]);
    }
    printf("Enter 2nd array size  =>");
    scanf("%d",&arr2);
    int array2[arr2];
    for(int i=0;i<arr2;i++){
        printf("Enter array ");
        scanf("%d",&array2[i]);
    }
    int size=arr1+arr2;
    int final_array[size];
    int n;
    for(n=0;n<arr1;n++){
        final_array[n]=array1[n];
    }
    int j=0;
    for(n;n<size;n++){
        final_array[n]=array2[j];
        j++;
    }
    printf("\nArray After Merging =>");
    for(int a=0;a<size;a++){
        printf("%d ",final_array[a]);
    }
    return 0;
}
*/

//Write a C program to find highest frequency element in array;
/*
#include <stdio.h>
int main(){
    int array[]={3,3,3,4,3};
    int size=sizeof(array)/sizeof(int);
    int arr[size];
        int count=0;
    for(int i=0;i<size;i++){
        count=0;
        for(int j=0;j<size;j++){
            if(array[j]==array[i]){
                count++;
            }
        arr[i]=count;
        }
    } 
    int max=0;
    int num=0;
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }
        for(int i=0;i<size;i++){
            if(arr[i]>max){
                max=i;
                num++;
            }
        }
        printf("\n%d has higest occurance with frequncy of %d ",array[max],num);
    return 0;
}
*/

//Write a C program to find sum of the number 
/*
#include <stdio.h>
int main(){
    int num=12345;
    int sum=0;
    while(num!=0){
        sum=sum+num%10;
        
        num=num/10;
    }
    printf("%d ",sum);
    return 0;
}
*/

//Write a c program to find the lcm of the an array
/*
#include <stdio.h>
int main(){
    int arr[]={2,3,5,4};
    int size =sizeof(arr)/sizeof(int);
    int i=0;
    int mp=arr[i];
  while(1){
    i=0;
    int count=0;
    while(i<size){
        if(mp%arr[i]==0){
            count++;
        }
        i++;
    }
        if(count==size){
            break;
        }
        else {
        mp++;
        }   
    }
  
  printf("%d ",mp);
    return 0;
}
*/

