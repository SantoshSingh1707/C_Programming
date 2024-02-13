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

#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *Next;
};
void LL_Travelsal(struct node *ptr)
{
    while (ptr !=NULL )
    {
        printf("Element :%d \n", ptr->data);
        ptr = ptr->Next;
    }
}

int main(){
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    first=(struct node*)malloc(sizeof(struct node ));
    second=(struct node*)malloc(sizeof(struct node ));
    third=(struct node*)malloc(sizeof(struct node ));
    fourth=(struct node*)malloc(sizeof(struct node ));
    //first
    first->data=10;
    first->Next=second;
    //second
    second->data=20;
    second->Next=third;
    //third
    third->data=30;
    third->Next=fourth;
    //fourth
    fourth->data=40;
    fourth->Next=NULL;
    LL_Travelsal(first);
    return 0;
}
