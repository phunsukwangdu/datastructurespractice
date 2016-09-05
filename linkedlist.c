#include<stdio.h>

struct node{
    int index;
    struct node *next;
};

typedef struct node node;
node *head=NULL;

void insert(int a){
    node *temp=(node *)malloc(sizeof(struct node));     //faltu mae comment add kiya
    temp->index=a;
    temp->next=head;
    head=temp;
}

void prnt(){
    node *temp=(node *)malloc(sizeof(struct node));
    temp=head;
    printf("\n");
    while(temp){
        printf("%d->",temp->index);
        temp=temp->next;
    }
    printf("\n");
}


int main(){
insert(1);
insert(2);
insert(3);
insert(4);
insert(5);
prnt();


}
