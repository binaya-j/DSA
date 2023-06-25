//Queue Implementation Using Link List.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
	int data;
	struct Node *next; 
};
struct Node *front=NULL;
struct Node *rear=NULL;
	
void enqueue(int data){
	struct Node *n=(struct Node *)malloc(sizeof(struct Node));
	n->data=data;
	n->next=NULL;	
	if(front==NULL){
		front=n;
		rear=n;
	}
	else{
		rear->next=n;
		rear=n;
	}
}

void dequeue(){
	if(front==NULL)
		printf("No Queue.\n");
	else if(front->next==NULL){
		free(front);
		front=NULL;
		rear=NULL;
	}
	else{
		struct Node *temp=front->next;
		free(front);
		front=temp;
	}
}

void peek(){
	printf("\n%d is at front.\n",front->data);
}

void display(){
	printf("\nThe Queue is : ");
	struct Node *temp=front;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main(){
    while(1){
    	int choice,data;
    	printf("1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\nEnter a choice: ");
    	scanf("%d",&choice);
	    switch(choice){
	    	case 1:
		    	printf("Enter a number to enqueue : ");
		    	scanf("%d",&data);
		    	enqueue(data);
		    	break;
	    	case 2:
		    	dequeue();
		    	break;
	    	case 3:
		    	peek();
		    	break;
	    	case 4:
		    	display();
		    	break;
	    	case 5:
		    	printf("Invalid Choice.\n");
		   		exit(1);
		}
	}
	return 0;
}
