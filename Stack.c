// ===========================================>STACK<============================================
/*
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;

};
int isempty(struct stack* ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isfull(struct stack* ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    struct stack *s;
    s->size=3;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    //Entering the value manually
    s->arr[0] = 5;
    s->top++;
    s->arr[1] = 4;
    s->top++;
    if(isempty(s)){
        printf("The stack is empty\n");
    }
    else{

        printf("The stack is not empty\n");
    }
    if(isfull(s)){
        printf("The stack is full\n");
    }
    else
        printf("The stack is not full\n");
    return 0;
}
*/


//                                      STACK OPERATION
//                                    PUSH(),POP(),PEEK()
/*
#include <stdio.h>
#include <stdlib.h>
struct stack 
{
    int size;
    int top;
    int *arr;
};
void creatingstack(struct stack *s,int size){
    s->size=size;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
}
int push(struct stack *s){
    if(s->top==s->size-1){
        printf("Stack Overflow\n");
    }
    else{

    if(s->top==-1){
        s->top=0;
    }
    int n;
    printf("Enter the value =>");
    scanf("%d",&n);
    s->arr[s->top]=n;
    s->top++;
    }
}
int display(struct stack *s){
    printf("Displaying Element =>\n");
    for(int i=0;i<s->top;i++){
        printf("%d\n",s->arr[i]);
    }
}

int pop(struct stack *s){
    if(s->top==-1){
        printf("Stack Underflow\n");
        return;
    }
    else{
        int remove=s->arr[s->top-1];
        s->top=s->top-1;
        printf("The removed element is %d\n",remove);
    }
}
int peek(struct stack *s){
    int i;
    printf("Enter the positon yo want to peek at :");
    scanf("%d",&i);
    if(s->top-i+1<0){
        printf("Invalid position\n");
        return -1;
    }
    else{
    s->top--;
        printf("At position %d , %d is found\n",i,s->arr[s->top-i+1]);
    s->top++;
        return ;
    }
}
int main(){
    struct stack s;
    creatingstack(&s,10);
    push(&s);
    push(&s);
    // pop(&s);
    display(&s);
    peek(&s);
    push(&s);
    push(&s);
    push(&s);
    display(&s);
    peek(&s);
    peek(&s);
    peek(&s);
    peek(&s);
    // pop(&s);
    return 0;
}
*/

// 