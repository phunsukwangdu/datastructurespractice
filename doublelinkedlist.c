#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *previous;
};

typedef struct node node;
node *head=NULL;
void insert(int a,int position){
    
    node *temp,*temp1,*temp2;
    int k=1;
    temp=(node *)calloc(sizeof(struct node));
    temp->data=a;
    if(position==1){
       temp->next=head;
       head->previous=temp;
       temp->previous=NULL;
       head=temp;
    }
    else{
        temp2=head;
        while(k<position && temp2!=NULL){
            temp1=temp2;
            temp2=temp2->next;
        }
        
    
    
    }

}


void delete(int position){


}


int main(){
}

