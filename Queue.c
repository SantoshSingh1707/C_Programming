//=======================================>QUEUE<============================
/*
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
        return -1;
    }
    return 0;
}
void enqueue(struct queue *q,int val){
    if(isfull(q)){
        printf("The queue is empty\n");
    }
    else{
        q->rear++;
        q->arr[q->rear]=val;
    }
}
int dequeue(struct queue *q){
    if(isempty(q)){
        printf("The queue is full\n");
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
*/


//                                                 CIRCULAR QUEUE
/*
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
*/

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

