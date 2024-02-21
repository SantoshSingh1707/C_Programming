// =====================================================>QUEUE<======================================================

#include <stdio.h>
#include <stdlib.h>
struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};
int isfull(struct queue *q){
    if(q->rear==q->size-1)
    {
        return 1;
    }
    return 0;
}
int isempty(struct queue *q){
    if(q->rear==q->front)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q,int val){
    if(isfull(q)){
        printf("The queue is Full\n");
    }
    else{
        q->rear++;
        q->arr[q->rear]=val;
        printf("enqueing element %d \n",val);

    }
}
int dequeue(struct queue *q){
    if(isempty(q)){
        printf("The queue is Empty\n");
        return -1;
    }
    else{
        q->front++;
        printf("Dequeuing element %d \n",q->arr[q->front]);
       return  0;
       
    }
}
int main(){
    struct queue qe;
    qe.size=10;
    qe.front=qe.rear=-1;
    qe.arr=(int*)malloc(qe.size*sizeof(int));
    enqueue(&qe,12);
    enqueue(&qe,15);
    enqueue(&qe,30);
    dequeue(&qe);
    dequeue(&qe);
    dequeue(&qe);
    dequeue(&qe);
    dequeue(&qe);
    return 0;
}


// ===================================================>CIRCULAR QUEUE<=======================================

#include <stdio.h>
#include <stdlib.h>
struct cqueue{
    int size;
    int front;
    int rear;
    int *arr;
};
void create_cqueue(struct cqueue *q,int size){
    q->rear=0;
    q->front=0;
    q->size=size;
    q->arr=(int*)malloc(q->size*sizeof(int));
}
void enqueue(struct cqueue *q,int val){
    if((q->rear+1)%q->size==q->front){
        printf("Queue Overflow. %d cannot be enqueued\n",val);
    }
    else{
        printf("Enqued element is %d\n",val);
        q->rear=(q->rear+1)%q->size;
        q->arr[q->rear]=val;
    }
}
int dequeue (struct cqueue *q){
    int val;
    if(q->front==q->rear){
        printf("The queue is empty\n");
    }
    else{
        q->front=(q->front+1)%q->size;
        val=q->arr[q->front];
        printf("%d removed \n",val);
    }
        return val;
}
int main(){
    struct cqueue cqe;
    create_cqueue(&cqe,4);
    enqueue(&cqe,10);
    enqueue(&cqe,12);
    enqueue(&cqe,14);
    dequeue(&cqe);
    dequeue(&cqe);
    dequeue(&cqe);
    enqueue(&cqe,16);
    enqueue(&cqe,16);
    enqueue(&cqe,16);
    enqueue(&cqe,16);
    dequeue(&cqe);
    dequeue(&cqe);
    dequeue(&cqe);
    dequeue(&cqe);
    return 0;
}


//                                               DOUBLE-ENDED QUEUE(DEQUEUE)

// ====================================================>NOT DONE YET<=============================================
/*
#include <stdio.h>
#include <stdlib.h>
struct DEqueue {
    int size;
    int front;
    int rear;
    int *arr;
};
void creating_DEqueue(struct DEqueue *q,int size){
    q->size=size;
    q->rear=0;
    q->front=0;
    q->arr=(int*)malloc(q->size*sizeof(int));
}
void Enqueue_F(struct DEqueue *q,int val){
    if(q->front==q->size-1){
        printf("Queue Overflow");
    }
    else{
        q->arr[q->front]=val;
        q->front++;
    }
}
void Enqueue_R(struct DEqueue *q,int val){
    if(q->rear==)
}
int main(){
    struct DEqueue DEQ;
    creating_DEqueue(&DEQ,10);
    return 0;
}
*/



//TRYING

#include <stdio.h>
#include <stdlib.h>
struct queue{
    int front;
    int rear;
    int size;
    int *arr;

};
void create_queue(struct queue *ptr,int size){
    ptr->front=-1;
    ptr->rear=-1;
    ptr->size=size;
    ptr->arr=(int*)malloc(ptr->size*sizeof(int));
}
int enqueue(struct queue *ptr,int data){
    if(ptr->rear==ptr->size-1){
        printf("Overflow\n");
        return -1;
    }
    else{
        ptr->rear++;
        ptr->arr[ptr->rear]=data;
        printf("Enquing Elemnet :%d\n",data);
    }
}
int dequeue(struct queue *ptr){
    if(ptr->front==ptr->rear){
        printf("Underflow\n");
    }
    else{
        ptr->front++;
        printf("Dequeuing element %d \n",ptr->arr[ptr->front]);
       return  0;
       
    }
}
int main(){
    struct queue Queue;
    create_queue(&Queue,3);
    enqueue(&Queue,10);
    enqueue(&Queue,20);
    enqueue(&Queue,30);
    dequeue(&Queue);
    dequeue(&Queue);
    dequeue(&Queue);
    dequeue(&Queue);
    return 0;
}


//Cricular queue

#include <stdio.h>
#include <stdlib.h>
struct cqueue{
    int size;
    int front;
    int rear;
    int *arr;
};

void Create_Cqueue(struct cqueue *ptr,int size){
    ptr->front=0;
    ptr->rear=0;
    ptr->size=size;
    ptr->arr=(int*)malloc(ptr->size*sizeof(int));
}

int enqueue(struct cqueue *ptr,int data){
    if((ptr->rear+1)%ptr->size==ptr->front){
        printf("Queue Overflow .%d cannot be enqueued\n",data);
    }
    else{
        printf("Enqueud element is %d \n",data);
        ptr->arr[ptr->rear]=data;
        ptr->rear=(ptr->rear+1)%ptr->size;
    }
}
int dequeue(struct cqueue *ptr){
    int val;
    if(ptr->front==ptr->rear){
        printf("The queue is Empty\n");
    }
    else{
        ptr->front=(ptr->front+1)%(ptr->size);
        val=ptr->arr[ptr->front];
        printf("%d is removed \n",val);
    }
    return 0;
}
int main(){
    struct cqueue cqu;
    Create_Cqueue(&cqu,4);
    enqueue(&cqu,10);
    enqueue(&cqu,20);
    enqueue(&cqu,30);
    enqueue(&cqu,30);
    // enqueue(&cqu,40);
    dequeue(&cqu);
    enqueue(&cqu,20);
    dequeue(&cqu);
    dequeue(&cqu);
    enqueue(&cqu,20);
    dequeue(&cqu);
    dequeue(&cqu);
    dequeue(&cqu);
}
