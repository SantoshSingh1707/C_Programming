// ============================================>ARRAY<======================================
/*
#include <stdio.h>
#include <stdlib.h>
struct myarr{
    int totalsize;
    int usedsize;
    int *ptr;
};
void createarray(struct myarr* a ,int tsize,int usize){
    // (*a).totalsize=tsize;
    // (*a).usedsize=usize;
    // (*a).ptr =(int*)malloc(tsize*sizeof(int));
    a->totalsize=tsize;
    a->usedsize=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
}
void show(struct myarr *a){
    for(int i=0;i< a->usedsize;i++){
        printf("%d \n",(a->ptr)[i]);
    }
}
void set(struct myarr *a){
    int n;
    for(int i=0;i< a->usedsize;i++){
        printf("Enter the value =>");
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
}
int main(){
    struct myarr marks;
    printf("We are running create array now\n");
    createarray(&marks,10,5);
    printf("We are running set value now\n");
    set(&marks);
    printf("We are running show now\n");
    show(&marks);
    return 0;
}
*/

// ===========================================>LINKED LIST<=======================================
// ===========================================>TRAVERSAL<=========================================
/*
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *Next;
};
void LL_Travelsal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element :%d \n", ptr->data);
        ptr = ptr->Next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    // First
    head->data = 7;
    head->Next = second;
    // second
    second->data = 8;
    second->Next = third;
    // third
    third->data = 9;
    third->Next = fourth;
    // fourth
    fourth->data = 10;
    fourth->Next = fifth;
    // fifith
    fifth->data = 11;
    fifth->Next = NULL;
    LL_Travelsal(head);
    return 0;
}
 */
// ===========================================>INSERTION<=========================================
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *Next;
};
void LL_Travelsal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element :%d \n", ptr->data);
        ptr = ptr->Next;
    }
}
struct node * insertAtfirst(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->Next=head;
    ptr->data=data;
    return ptr;
}
struct node * insertAtEnd(struct node *head,int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    ptr->Next=head;
    while (p->Next!=NULL)
    {
        p=p->Next;
    }
    
    p->Next=ptr;
    ptr->data=data;
    ptr->Next=NULL;
    return head;
}
struct node * insertAtIndex(struct node *head,int data,int index){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    struct node *p=head;
    int i=0;
    while (i!=index-1)
    {
        p=p->Next;
        i++;
    }
    ptr->data=data;
    ptr->Next=p->Next;
    p->Next=ptr;    
    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    // First
    head->data = 7;
    head->Next = second;
    // second
    second->data = 8;
    second->Next = third;
    // third
    third->data = 9;
    third->Next = fourth;
    // fourth
    fourth->data = 10;
    fourth->Next = fifth;
    // fifith
    fifth->data = 11;
    fifth->Next = NULL;
    LL_Travelsal(head);
    // head=insertAtfirst(head,60);
    // LL_Travelsal(head);
    head=insertAtEnd(head,70);
    LL_Travelsal(head);
    return 0;
}


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

// =======================================>QUEUE<============================
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
