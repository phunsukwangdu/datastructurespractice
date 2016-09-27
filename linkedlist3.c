#include<stdio.h>
#include<stdlib.h>

struct listnode{
	int data;
	struct listnode *next;
};

typedef struct listnode node;

node *create(){
	return NULL;
}


void insert(node **head,int position,int dt){
    node *temp1,*temp3;
    temp1=*head;
    node *newnode=(node *)malloc(sizeof(struct listnode));
    newnode->data=dt;
    int k=1;
    if(position==1){
    	newnode->next=temp1;
    	*head=newnode;
    } 
    else{
    	while(temp1!=NULL && k<position){
    		temp3=temp1;
    		temp1=temp1->next;
    		k++;
    	}
        newnode->next=temp3->next;
        temp3->next=newnode;       	
    }    

}

void delete(node **head,int position){
	node *temp1,*temp2,*temp3;
	temp1=*head;
	int k=1;
	if(position==1){
		*head=temp1->next;
        free(temp1);  
	}
	else{
		while(temp1!=NULL && k<position){
			temp3=temp1;
			temp1=temp1->next;
			k++;
		}
        temp3->next=temp1->next;
        free(temp1);
	}

}

void display(node **head){
    node *temp;
    temp=*head;
    while(temp!=NULL){
    	printf("%d->",temp->data);
    	temp=temp->next;
    }
    printf("NULL\n");
}



int main(){
    node *x=create();
    insert(&x,1,1);
    insert(&x,1,6);
    insert(&x,1,3);
    insert(&x,1,8);
    insert(&x,1,5);
    display(&x);
    delete(&x,3);
    display(&x);
    delete(&x,3);
    display(&x);
    //insert(&x,1,3);
    //insert(&x,1,10);
	return 0;
}