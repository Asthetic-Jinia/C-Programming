#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;

};

//Insert at the end
struct node *insertEnd(struct node *head,int val){
    struct node *newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    
    newnode->next=NULL;
    if (head == NULL) {   // If list is empty
        head = newnode;
        return head;
    }
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
  
    temp->next=newnode;
    
    return head;
}
//Delet from first
struct node *deletFirst(struct node *head){
        struct node *temp;
        temp=head;
        head=temp->next;
        free(temp);
        return head;
}
//Delet from end
struct node *deletEnd(struct node *head){
        struct node *temp,*prev;
        temp=prev=head;
        while(temp->next!=NULL){
                prev=temp;
                temp=temp->next;

        }
        if(temp==head){
                head=NULL;
        }else{
                prev->next=NULL;
        }
        
        free(temp);
        return head;
}
//Delet from any position
struct node *deletAnyPosition(struct node *head,int pos){
        struct node *nextnode,*temp;
        int i=1;
        temp=head;
        while(i<pos-1){
                temp=temp->next;
                i++;
        }
        nextnode=temp->next;
        temp->next=nextnode->next;
        free(nextnode);
        return head;
}

void display(struct node *newnode){
    if(newnode==NULL){
        printf("Empty\n");
        return ;
     }
    printf("Elements :\n");

    while(newnode!=NULL){
        printf("%d ",newnode->data);
       newnode=newnode->next;
    }
    printf("\n");
}


int main(){
      struct node *head;
       head=NULL;
      int val,ch,pos;
     
      printf("1.Insert at end\n2.Delet at first\n3.delete at end\n4.Delet at any position\n5.display\n6.end\n");
  
        while(1){
         printf("Entre choice :");
           scanf("%d",&ch);
           switch(ch){
                case 1: printf("Entre value :");
                        scanf("%d",&val);
                        head=insertEnd(head,val);
                        break;
                case 2:  
                        head=deletFirst(head);
                        break;
                case 3: 
                        
                        head=deletEnd(head);
                        break;
                case 4: printf("Entre the position :");
                        scanf("%d",&pos);
                        head=deletAnyPosition(head,pos);
                        break;
                
                case 5 : display(head);
                         break; 
                case 6: exit(1);                                                  
                }
      }
      return 0;
    
}