#include<stdio.h>
#include<stdlib.h>

#define size 5
int cq[size];
int front=-1;
int rear=-1;

int isEmpty(){
	return front==-1;
}
int isFull(){
	return front==(rear+1)%size;
}
void enque(int data){
	if(isFull()){
		printf("\nQueue is Full.\n");	
	}
	else{
		if(isEmpty()){
			front=0;
		}
		rear=(rear+1)%size;
		cq[rear]=data;
	}
}
void deque(){
	if(isEmpty()){
		printf("Queue is Empty.\n");
	}
	else{
		printf("%d is Dequeued.\n",cq[front]);
		if(front==rear){
			front=-1;
			rear=-1;
		}
		else{
			front=(front+1)%size;
		}
	}
}

void peek(){
	if(isEmpty()){
		printf("Queue is Empty.\n");
	}
	else{
		printf("%d is at the front.\n",cq[front]);
	}
}
void display(){
	int i;
	if(isEmpty()){
		printf("The Queue is Empty.\n");
	}
	else{
		printf("The Queue is : \n");
		for(i=front;i!=rear;i=(i+1)%size){
			printf("%d ",cq[i]);
		}
		printf("%d \n",cq[i]);
	}

}

int main(){
	int data,choice;
	while(1){
		printf("1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\nEnter a choice: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Enter a Number to enqueue: ");
				scanf("%d",&data);
				enque(data);
				break;
			case 2:
				deque();
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
				printf("Invalid Choice.\n");
				break;
		}
	}
	return 0;
}
