#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

// Create a tree

struct node *create(){
    int x;
    struct node *newnode;
    
    printf("Enter the data(-1 for no child):");
    scanf("%d",&x);
    if(x==-1){
        return NULL;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    printf("Enter the left child of %d:\n",x);
    newnode->left=create();
    printf("Enter the right child of %d:\n",x);
    newnode->right=create();
    return newnode;
}

// preOrder-> root,left,right
void preOrder(struct node *root){
    if(root==NULL){
        return;
    }
    printf(" %d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
    
}

// InOrder-> left,root,right
void inOrder(struct node *root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    printf(" %d ",root->data);
    inOrder(root->right);
    
}

//PostOrder->left,right,root
void postOrder(struct node *root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf(" %d ",root->data);
    
}

void main(){
    struct node *root;
    root=NULL;
    root=create();

    printf("\nPreOrder Traversal:");
    preOrder(root);

    printf("\nInOrder Traversal:");
    inOrder(root);

    printf("\nPostOrder Traversal:");
    postOrder(root);

    printf("\n");


    return ;
}