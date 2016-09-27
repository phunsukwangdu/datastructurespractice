#include<stdio.h>

struct listnode{
    int data;
    struct listnode *next;
};


typedef struct listnode node;
node *head=NULL;

void insert(node **head,int position,int dt){
	node *temp1,*temp2,*temp3;
	int k=1;
	temp2=*head;
	temp1=(node *)malloc(size(struct listnode));
	temp1->data=dt;
	if(position==1){
		temp1->next=temp2;
		head=temp1;
	}
	else{
        while(temp2!=NULL && k!=position){
        	temp3=temp2;
        	temp2=temp2->next;
        	k++;
        }
        //temp3->next=temp1;
        temp1->next=temp3;
        temp3->next=temp1;

	}

}

void delete(int position){
	node *temp=*head,temp1;
	if(position==1){
		head=temp->next;
		temp->next=NULL;
		free(temp);
	}
	else{
		while(temp!=NULL && k!=position){
			temp1=temp;
			temp=temp->next;
			k++;
		}
		
	}

}

void display(node **head){
     node *temp=*head;
     while(temp!=NULL){
     	printf("%d->",temp->data);
     	temp=temp->next;
     }
}

int main(){}
