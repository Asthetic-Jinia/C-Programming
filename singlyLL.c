// //creat a node

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(){
struct Node *head, *newNode, *temp;
int choice=1;
while(choice==1){
    newNode=(struct Node*)malloc(sizeof(struct Node));
    printf("Enter the data:");
    scanf("%d",& newNode->data);
    newNode->next =head;
    head=newNode;
    printf("Do you want to continue (0/1)?");
    scanf("%d",&choice);
}
    temp=head;
    while(temp!=NULL){
        printf("%d ->", temp->data);
        temp=temp->next;
    }
    printf("NULL\n");

    return 0;
}

