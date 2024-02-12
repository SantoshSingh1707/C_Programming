#include <stdio.h>
int tower(int num,char from,char top,char aux){
    if(num==1){
        printf("Move disk 1 from peg %c to %c \n",from,top);
    return 0;
    }
    tower(num-1,from,aux,top);
    printf("Moved %d disk from peg %c to %c \n",num,from,top);
    tower(num-1,aux,top,from);
}
int main(){
    int num;
    printf("Enter the number the dics in the tower =>");
    scanf("%d",&num);
    tower(num,'A','B','C');
    return 0;
}