//Implementation of Stack using Linked List.

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Node{
	int data;
	struct Node *next; 
};
struct Node *top=NULL;
	
void push(int data){
	struct Node *n=(struct Node *)malloc(sizeof(struct Node));
	n->data=data;
	n->next=NULL;	
	if(top==NULL){
		top=n;
	}
	else{
		n->next=top;
		top=n;
	}
}

void pop(){
	if(top==NULL)
		printf("No List.\n");
	else{
		struct Node *temp=top;
		top=top->next;
		temp->next=NULL;
		free(temp);
	}
}

void peek(){
	printf("%d is at Stack.\n",top->data);
}

void display(){
	struct Node *temp=top;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("\n");
}

int main(){
    int choice;
    printf("Stack Implementation Using Linked List.\n");
    while(1){
    int data;
    printf("Choose the operation: 1.Push 2.Pop 3.Peek 4.Display Stack. 5.Exit\n");
    scanf("%d",&choice);
    switch(choice){
    	case 1: 
				printf("Enter a data to push into Stack: ");
                scanf("%d",&data);
                push(data);
                break;
        case 2: 
				pop();
        		break;
        case 3:
        		peek();
        		break;
        case 4: 
				display();
        		break;
        case 5:
        		exit(1);
        default:
        	exit(1);
	}
	}
	return 0;
}
