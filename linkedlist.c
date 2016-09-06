#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

typedef struct node node;
node *head=NULL;

void insert(int a,int position){
    node *temp=(node *)malloc(sizeof(struct node));     
    node *p,*q;
    int k=1;
    p=head;
    if(position==1){
        temp->data=a;
        temp->next=head;
        head=temp;    
    }
    else{
        while(p!=NULL && k<position){
            q=p;
            p=p->next;
        }
        temp->data=a;
        temp->next=p;
        q->next=temp;
    }
    
}

void prnt(){
    node *temp=(node *)malloc(sizeof(struct node));
    temp=head;
    printf("\n");
    while(temp){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


int main(){
insert(1,1);
insert(2,2);
insert(3,3);
insert(4,4);
insert(5,5);
prnt();


}
