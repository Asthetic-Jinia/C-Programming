#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node;
struct node *insertfirst(struct node *head,int val){
         struct node *ptr=(struct node*)malloc(sizeof(struct node));
         ptr->data=val;
         ptr->next=head;
         head=ptr;
         return head;
}
struct node *insertend(struct node *head,int val){
         struct node *ptr=(struct node*)malloc(sizeof(struct node));
         ptr->data=val;
        struct node *p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=ptr;
        ptr->next=NULL;
      return head;
}
struct node *insertanypos(struct node *head,int val,int index){
         struct node *ptr=(struct node*)malloc(sizeof(struct node));
         ptr->data=val;
         struct node *p=head;
         int i=0;
         while(i!=index-1){
               p=p->next;
               i++;
         }
        ptr->next=p->next;
        p->next=ptr;
        return head; 

}
struct node *deletefirst(struct node *head){
           if(head==NULL){
                printf("Empty\n");
                return head;
           }
            struct node *p=head;
            head=head->next;
            printf("%d is deleted\n",p->data);
            free(p);
            return head;
}

void display(struct node *ptr){
    if(ptr==NULL){
        printf("Empty\n");
        return ;
     }
    printf("Elements :\n");

    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
struct node *reverse(struct node *head){
     if(head==NULL){
        printf("Empty\n");
        return head;
    }
      struct node *prev=NULL;
      struct node *curr=head;
      struct node *next=NULL;
      while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
      }
      head=prev;
      return head;
}
struct node  *sort(struct node *head){
    if(head==NULL){
        printf("Empty\n");
        return head;
    }
     struct node *i;
     struct node *j;
     for(i=head;i->next!=NULL;i=i->next){
        for(j=i->next;j!=NULL;j=j->next){
            if(i->data > j->data){
                  int temp=i->data;
                  i->data=j->data;
                  j->data=temp;
            }
        }
     }
     return head;
}
int main(){
      struct node *head;
      head=NULL;
      printf("1.Insert at first\n2.Insert at end\n3.Insert at any position\n4.delete\n5.reverse\n6.sort\n7.display\n8.end\n");
      int ch,val,index;
      while(1){
           printf("Entre choice :");
           scanf("%d",&ch);
           switch(ch){
                case 1: printf("Entre value :");
                        scanf("%d",&val);
                        head=insertfirst(head,val);
                        break;
                case 2:  printf("Entre value :");
                        scanf("%d",&val);
                        head=insertend(head,val);
                        break;
                case 3: printf("Entre value :");
                        scanf("%d",&val);
                        printf("Entre the index :");
                        scanf("%d",&index);
                        head=insertanypos(head,val,index);
                        break;
                case 4: head=deletefirst(head);
                        break;
                case 5: head=reverse(head);
                        break;   
                case 6: head=sort(head);
                        break;
                case 7 : display(head);
                         break; 
                case 8: exit(1);                                                  
           }
      }
      return 0;

}
