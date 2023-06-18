#include<stdio.h>

#define size 5
int cq[size];
int front=-1;
int rear=-1;

int isEmpty(){
	return front==-1?(printf("The Queue is Empty.\n"),1):0;
}
int isFull(){
	return ((rear-front)==size-1)||(front=0 && rear==size-1)?(printf("The Queue is Full.\n"),1):0;
}
void enque(int data){
	if(!isFull()){
		if(front=-1)
			front=0;
		if(rear==size-1&&front !=0)
			rear=-1;
		rear++;
		if(rear==size)
			rear=0;
		cq[rear]=data;
	}
}
void deque(){
	if(!isEmpty()){
		printf("%d Dequeued.\n",cq[front]);
	if(front==rear){
		front=-1;
		rear=-1;
	}
	else{
		front++;
		if(front==size)
			front=0;
	}
}
}
void peek(){
	printf("%d is at peek.\n",cq[front]);
}
void display(){
	if(!isEmpty()){
		printf("Queue Elements: ");
		int i=front;
		if(front<=rear){
			while(i<=rear){
				printf("%d ",cq[i]);
				i++;
			}
		}
		else{
			while(i<size){
				printf("%d ",cq[i]);
				i++;
			}
			i=0;
			while(i<=rear){
				printf("%d ",cq[i]);
				i++;
			}
		}
		printf("\n");
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
