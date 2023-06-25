//Menu driven program for Double Circular linked list.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
	int data;
	struct Node *next; 
	struct Node *prev; 
};
struct Node *start=NULL;
	
void add_at_begin(int data){
	struct Node *n=(struct Node *)malloc(sizeof(struct Node));
	n->data=data;
	n->next=NULL;
	n->prev=NULL;	
	if(start==NULL){
		start=n;
		start->next=start;
		start->prev=start;
	}
	else{
		start->prev->next=n;
		n->next=start;
		n->prev=start->prev;
		start->prev=n;
		start=n;
	}
}

void add_at_last(int data){
	struct Node *n=(struct Node *)malloc(sizeof(struct Node));
	n->data=data;
	n->next=NULL;
	n->prev=NULL;
	if(start==NULL){
		start=n;
		start->next=start;
		start->prev=start;
	}
	else{
		struct Node *temp=start->prev;
		n->next=start;
		start->prev=n;
		temp->next=n;
		n->prev=temp;
	}	
}

void add_at_Pos(int data,int pos){
	struct Node *n=(struct Node *)malloc(sizeof(struct Node));
	n->data=data;
	n->next=NULL;
	n->prev=NULL;
	if(start==NULL){
		start=n;
		start->next=start;
		start->prev=start;
	}
	else{
		struct Node *temp=start;
		int i;
		for(i=1;i<pos-1;i++){
			temp=temp->next;
		}
		temp->next->prev=n;
		n->next=temp->next;
		temp->next=n;
		n->prev=temp;
	}
	
}

void delete_at_begin(){
	if(start==NULL)
		printf("No List.\n");
	else if(start->next==start){
		free(start);
		start=NULL;
	}
	else{
		struct Node *temp=start->next;
		start->prev->next=temp;
		temp->prev=start->prev;
		free(start);
		start=temp;
	}
}

void delete_at_last(){
	if(start==NULL)
		printf("No List.\n");
	else if(start->next==start){
		free(start);
		start=NULL;
	}
	else{
		struct Node *temp=start->prev->prev;
		struct Node *temp1=start->prev;
		temp->next=start;
		start->prev=temp;
		free(temp1);
	}
}

void delete_at_Pos(int pos){
	if(start==NULL)
		printf("No List.\n");
	else if(start->next==NULL){
		free(start);
		start=NULL;
	}
	else{
		struct Node *temp=start;
		int i;
		for(i=1;i<pos-1;i++){
			temp=temp->next;
		}
		struct Node *temp1=temp->next;
		struct Node *temp2=temp->next->next;
		temp->next=temp2;
		temp2->prev=temp;
		free(temp1);
	}
}

void display(){
	struct Node *temp=start;
	printf("%d ",start->data);
	while(temp->next!=start){
		printf("%d ",temp->next->data);
		temp=temp->next;
	}
	printf("\n");
}

int main(){
	printf("Implementation of Double Linked List.\n");
	while(1){
		int data,choice,ch,pos;
		printf("1.Add Data 2.Delete Data 3.Display LinkList 4.Exit\nChoose an operation.");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter a data to add on LinkList: ");
				scanf("%d",&data);
				printf("Choose an Option:\n1.Add at Beginning 2.Add at Last 3.Add at n-Postion.\n");
				scanf("%d",&ch);
				switch(ch){
					case 1:
						add_at_begin(data);
						break;
					case 2:
						add_at_last(data);
						break;
					case 3:
						printf("Enter the n-Position: ");
						scanf("%d",&pos);
						add_at_Pos(data,pos);
						break;		
				}
				break;
			case 2:
				printf("Choose an Option:\n1.Delete at Beginning 2.Delete at Last 3.Delete at n-Position.\n");
				scanf("%d",&ch);
				switch(ch){
					case 1:
						delete_at_begin();
						break;
					case 2:
						delete_at_last();
						break;
					case 3:
						printf("Enter n-postion to delete: ");
						scanf("%d",&pos);
						delete_at_Pos(pos);
						break;
					default:
						printf("Invalid Option.\n");
						break;		
				}
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("Invalid Option.\n");
				break;	
		}
		
	}	
}
