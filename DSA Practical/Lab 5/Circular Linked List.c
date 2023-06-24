//Menu driven program for Circular linked list.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
	int data;
	struct Node *next; 
};
struct Node *start=NULL;

void add_at_begin(int data){
	struct Node *n=(struct Node *)malloc(sizeof(struct Node));
	n->data=data;
	n->next=NULL;
	struct Node *temp=start;	
	if(start==NULL){
		start=n;
		n->next=n;
	}
	else{
		while(temp->next != start){
			temp=temp->next;
		}
		n->next=start;
		start=n;
		temp->next=n;
	}
}

void add_at_last(int data){
	struct Node *n=(struct Node *)malloc(sizeof(struct Node));
	n->data=data;
	n->next=NULL;
	if(start==NULL){
		start=n;
		n->next=n;
	}
	else{
		struct Node *temp=start;
		while(temp->next!=start){
			temp=temp->next;
		}
		temp->next=n;
		n->next=start;
	}	
}

void add_at_Pos(int data,int pos){
	struct Node *n=(struct Node *)malloc(sizeof(struct Node));
	n->data=data;
	n->next=NULL;
	if(start==NULL){
		start=n;
		start->next=start;
	}
	else if(start->next==start){
		start->next=n;
		n->next=start;
	}
	else{
		struct Node *temp=start;
		int i;
		for(i=1;i<pos-1;i++){
			temp=temp->next;
		}
		n->next=temp->next;
		temp->next=n;
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
		struct Node *temp=start;
		while(temp->next!=start){
			temp=temp->next;
		}
		struct Node *temp2=start;
		start=temp2->next;
		temp2->next=NULL;
		free(temp2);
		temp->next=start;
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
		struct Node *temp=start;
		while(temp->next->next !=start){
			temp=temp->next;
		}
		struct Node *temp2=temp->next;
		temp->next=start;
		temp2->next=NULL;
		free(temp2);
	}
}

void delete_at_Pos(int pos){
	if(start==NULL)
		printf("No List.\n");
	else if(start->next==start){
		free(start);
		start=NULL;
	}
	else{
		struct Node *temp=start;
		int i;
		for(i=1;i<pos-1;i++){
			temp=temp->next;
		}
		struct Node *temp2=temp->next;
		temp->next=temp2->next;
		temp2->next=NULL;
		free(temp2);
	}
}

void display(){
	struct Node *temp=start;
	printf("%d ",temp->data);
	temp=temp->next;
	while(temp!=start){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main(){
	
	printf("Implementation of Circular Linked List.\n");
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
