// ===========================================>LINKED LIST<=======================================
// ===========================================>TRAVERSAL<=========================================

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

// =====================================>DELETION<=============================

#include <stdio.h>
#include<stdlib.h>
struct node{
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
struct node *Delete_From_First(struct node *head){
    struct node *ptr=head;
    // ptr=head;
    head=head->Next;
    free(ptr);
    return head;
}
struct node *Delete_at_Index(struct node *head,int index){
    struct node *p=head;
    struct node *q=head->Next;
    for(int i=0;i<index-1;i++){
        p=p->Next;
        q=q->Next;
    }
    p->Next=q->Next;
    free(q);
    return head;
}
struct node *Delete_at_End(struct node *head){
    struct node *p=head;
    struct node *q=head->Next;
    while (q->Next!=NULL)
    {
        p=p->Next;
        q=q->Next;
    }
    p->Next=NULL;
    free(q);
    return head;     
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    // First
    head->data = 7;
    head->Next = second;
    // second
    second->data = 8;
    second->Next = third;
    // third
    third->data=9;
    third->Next=fourth;
    //fourth
    fourth->data=10;
    fourth->Next=NULL;
    printf("Before Deletion\n");
    LL_Travelsal(head);
//    head= Delete_From_First(head);
//    head= Delete_at_Index(head,2);
   head=Delete_at_End(head);
    printf("After Deletion\n");
    LL_Travelsal(head);
    return 0;
}


// =============================================>CIRCULAR LINKED LIST<===============================================
// =============================================>INSERTION<==================================================

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *Next;
};
void LL_Travelsal(struct node *p)
{
    struct node *ptr=p;
    while (ptr->Next !=p )
    {
        printf("Element :%d \n", ptr->data);
        ptr = ptr->Next;
    }
    printf("Element :%d \n", ptr->data);
}

struct node * insertAtEnd(struct node *head,int val){
    struct node*ptr=(struct  node*)malloc(sizeof(struct node) );
    struct node*p=head;
    while(p->Next!=head){
        p=p->Next;
}
p->Next=ptr;
ptr->data=val;
ptr->Next=head;
return head;
}

struct node * insertAtFirst(struct node *head,int data){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    struct node *p=head;
    while(p->Next!=head){
        p=p->Next;
    }
    p->Next=ptr;
    ptr->Next=head;
    head=ptr;
    return head;
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*)malloc(sizeof(struct node ));
    second=(struct node*)malloc(sizeof(struct node ));
    third=(struct node*)malloc(sizeof(struct node ));
    fourth=(struct node*)malloc(sizeof(struct node ));
    //head
    head->data=10;
    head->Next=second;
    //second
    second->data=20;
    second->Next=third;
    //third
    third->data=30;
    third->Next=fourth;
    //fourth
    fourth->data=40;
    fourth->Next=head;
    printf("Before Insertion\n");
    LL_Travelsal(head);
    // head=insertAtEnd(head,50);
    head=insertAtFirst(head,0);
    printf("After Insertion\n");
    LL_Travelsal(head);

    return 0;
}



// ===================================>DOUBLY LINKED LIST<===============================================

#include <stdio.h>
#include <malloc.h>
struct node{
    struct node *next;
    int data;
    struct node *prev;
};
struct node * head;
void traverse_forward(){
    printf("Printing Element Forward :\n");
    struct node*temp;
    temp=head;
    while (temp!=NULL)
    {
        printf("Element :%d\n",temp->data);
        temp=temp->next;
    }
    
}
void Travere_Backward(){
    printf("Printing Element Backward :\n");
    struct node*temp;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    while(temp!=NULL){
        printf("Element :%d\n",temp->data);
        temp=temp->prev;
    }
}
void firstnode(int data){
    head->data=data;
    return;
}
void add_at_Last(int data){
    struct node*temp,*r;
    r=head;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    while (r->next!=NULL)
    {
        r=r->next;
    }
    r->next=temp;
    temp->prev=r;
    temp->next=NULL;
    r=temp;
    printf("Element added at last:%d\n",data);
}
int main(){
    
    head=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    head->prev=NULL;
    firstnode(40);
    add_at_Last(50);
    add_at_Last(60);
    add_at_Last(70);
    traverse_forward();
    Travere_Backward();
    return 0;
}

//Self try
//linked  list  **INSERTION**


#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *Next;
};

void Traversal(struct node * ptr){
    while(ptr!=NULL){
        printf("Element :%d\n",ptr->data);
        ptr=ptr->Next;
    }
}

struct node * Insert_At_End(struct node*head,int data){
    struct node *p=(struct node *)malloc(sizeof(struct node));
    struct node *ptr=head;
    while (ptr->Next!=NULL)
    {
        ptr=ptr->Next;
    }
    // p=ptr;
    ptr->Next=p;
    p->data=data;
    p->Next=NULL;
    return head;
}

struct node *Insert_At_First(struct node *ptr,int data){
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node ));
    p->data=data;
    p->Next=ptr;
    return p;
}

struct node *Insert_At_Position(struct node *head,int data,int pos){
    int i=1;
    struct node *ptr;
    struct node *p;
    p=head;
    ptr=(struct node *) malloc (sizeof (struct node));
    while(i!=pos-1){
        p=p->Next;
        i++;
    }
    ptr->data=data;
    ptr->Next=p->Next;
    p->Next=ptr;
    return head;
}

int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    //head
    head->data=10;
    head->Next=second;
    // second
    second->data=20;
    second->Next=third;
    // third
    third->data=30;
    third->Next=fourth;
    // fourth
    fourth->data=40;
    fourth->Next=NULL;
    // Traversal(head);
    Insert_At_End(head,60);
    // head=Insert_At_First(head,0);
    // Insert_At_Position(head,100,3);
    Traversal(head);

    return 0;
}



//Linked List Deletion


#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *Next;
};

void Traversal(struct node * ptr){
    while(ptr!=NULL){
        printf("Element :%d\n",ptr->data);
        ptr=ptr->Next;
    }
}

struct node * Delete_At_End(struct node *ptr){
    struct node *p=ptr;
    struct node * q=ptr->Next;
    while(q->Next!=NULL){
        p=p->Next;
        q=q->Next;
    }
    p->Next=NULL;
    free(q);
    return ptr;
}

struct node * Delete_At_first(struct node *head){
    struct node *ptr=head;
    head=head->Next;
    free(ptr);

    return head;
}
struct node * Delete_At_Index(struct node *head,int pos){
    struct node *ptr=head;
    int i=0;
    while(i!=pos-1){
        ptr=ptr->Next;
        i++;
    }
    
}
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth=(struct node*)malloc(sizeof(struct node));

    //first
    head->data=10;
    head->Next=second;
    //second
    second->data=20;
    second->Next=third;
    //third
    third->data=30;
    third->Next=fourth;
    //fourth
    fourth->data=40;
    fourth->Next=fifth;
    //fifth
    fifth->data=50;
    fifth->Next=NULL;
    // head=Delete_At_End(head);
    // head=Delete_At_first(head);

    Traversal(head);
    return 0;
}


//Doubly Linked list
// problem
#include <stdio.h>
#include <malloc.h>
struct node{
    struct node *next;
    int data;
    struct node *prev;
};
struct node*head,*tail;
void traverse_forward(){
    struct node*temp;
    temp=head;
    while (temp!=NULL)
    {
        printf("Element :%d\n",head->data);
        head=head->next;
    }
    
}
void firstnode(int data){
    head->data=data;
    return;
}
void add_at_Last(int data){
    struct node*temp,*r;
    r=head;
    temp=(struct node *)malloc(sizeof(struct node));
    while()
    temp->data=data;
    tail->next=temp;
    temp->prev=tail;
    temp->next=NULL;
    tail=temp;
    printf("Element added at last:%d\n",data);
}
int main(){
    
    head=(struct node *)malloc(sizeof(struct node));
    tail=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    tail->next=NULL;
    head->prev=NULL;
    tail->prev=NULL;
    firstnode(40);
    add_at_Last(50);
    add_at_Last(60);
    add_at_Last(70);
    traverse_forward();
    return 0;
}
