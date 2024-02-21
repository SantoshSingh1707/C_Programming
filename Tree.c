// ======================================================>TREE<=====================================================

#include <stdio.h>
#include <stdlib.h>
// ------------------------------------------------------->TRAVERSAL<--------------------------------------------------
struct node {
    struct node *left;
    int data;
    struct node *right;
};

struct node * CreateNode(int data){
    struct node * l;
    l=(struct node * )malloc (sizeof(struct node ));
    l->data=data;
    l->left=NULL;
    l->right=NULL;
    return l;
}

void Preorder_Traversal(struct node * root){
    if(root!=NULL){
        printf("%d ",root->data);
        Preorder_Traversal(root->left);
        Preorder_Traversal(root->right);
    }
}

void Postorder_Traversal(struct node * root){
    if(root!=NULL){
        Postorder_Traversal(root->left);
        Postorder_Traversal(root->right);
        printf("%d ",root->data);
    }
}

void Inorder_Traversal(struct node *root){
    if(root!=NULL){
        Inorder_Traversal(root->left);
        printf("%d ",root->data);
        Inorder_Traversal(root->right);
    }
}

int main(){
   struct node *root=CreateNode(4);
   struct node *p1=CreateNode(1);
   struct node *p2=CreateNode(6);
   struct node *p11=CreateNode(5);
   struct node *p12=CreateNode(2);


   //Linking node;
   root->left=p1;
   root->right=p2;
    
    //linking p1
    p1->left=p11;
    p1->right=p12;

// This is how tree will look like
//      4
//     / \
//    1   6
//   / \
//  5   2

    printf("Printing using Preorder :");
    Preorder_Traversal(root);
    printf("\nPrinting using Postorder :");
    Postorder_Traversal(root);
    printf("\nPrinting using Inorder :");
    Inorder_Traversal(root);
    return 0;
}
