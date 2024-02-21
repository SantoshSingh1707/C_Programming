// ===========================================>STACK USING LINKED LIST<==============================================
/*
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

void Traversal(struct node *top){
    while(top!=NULL){
        printf("Element : %d\n",top->data);
        top=top->next;
    }
}

int isEmpty(struct node * top){
    if(top==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct node * top){
    struct node *p=(struct node *)malloc(sizeof(struct node));
    if(p==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct node * push(struct node *top,int data){
    if(isFull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct node *n=(struct node *)malloc(sizeof(struct node));
        n->data=data;
        n->next=top;
        top=n;
        // printf("Element Added in Stack :%d\n",top->data);
        return top;
    }
}

struct node * pop(struct node * top){
    struct node *p=top;
    top=top->next;
    printf("Element Removed :%d\n",p->data);
    free(p);
    return top;
}

int main(){
    struct node * top=NULL;
    top=push(top,10);
    top=push(top,20);
    top=push(top,30);
    top=push(top,40);
    Traversal(top);
    top=pop(top);
    Traversal(top);
    return 0;
}

*/
// ===========================================>QUEUE USING LINKED LIST<==============================================

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
void Traversal(struct node *top){
    printf("Element in Stack :\n");
    while(top!=NULL){
        printf("Element : %d\n",top->data);
        top=top->next;
    }
}

struct node *Enqueue(int data){
    struct node *n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL){
        printf("Queue is Full");
    }
    n->data=data;
    n->next=NULL;
    if(front==NULL){
        front=rear=n;
    }
    else{
        rear->next=n;
        rear=n;
    }
    // printf("Element Enqueued %d\n",data);
}
struct node *Dequeue(){
    int val=-1;
    struct node *n=(struct node*)malloc(sizeof(struct node));
    if(front==NULL){
        printf("Stack Underflow");
    }
    n=front;
    front=front->next;
    printf("Element dequeued :%d \n",n->data);
    free(n);
}
int main(){
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Traversal(front);
    Dequeue();
    Dequeue();
    Traversal(front);

    return 0;
}