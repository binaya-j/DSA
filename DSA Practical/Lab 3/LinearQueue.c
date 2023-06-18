#include<stdio.h>
#define size 10

int queue[size];
int front = -1;
int rear = -1;

int isFull(){
    return (rear>=size-1);
}
int isEmpty(){
    return (front==-1 || front>rear);
}

void enque(int data){
    if(isFull()){
        printf("The Queue is Full.\n");
    }
    else{
        if(isEmpty()){
            front++;
        }
        rear++;
        queue[rear]=data;
    }
    printf("\n");
    display();
}
void deque(){
    int dq;
    if(isEmpty()){
        printf("The Queue is Empty.\n");
    }
    else{
        dq=queue[front];
        front++;
        printf("%d is out of Queue.\n",dq);
    }
}
void peek(){
    if(isEmpty()){
        printf("The Queue is Empty.\n");
    }
    else{
        printf("%d is at Peek.\n",queue[front]);
    }
}
void display(){
	int i;
    if(isEmpty()){
        printf("The Queue is Empty.\n");
    }
    else{
        for(i=front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
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
		    		printf("Invalid Choice.\n");
		    		exit(1);
		}
	}
	return 0;
}
