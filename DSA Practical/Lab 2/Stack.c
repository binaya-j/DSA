#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define size 5
int stack[size];
int top=-1;

int isEmpty(){
    return (top==-1);
}
int isFull(){
    return (top>=size-1);
}
void push(int data){
    if(isFull()){
        printf("The Stack is Full.");
    }
    else{
    	top++;
        stack[top]=data;
        printf("%d is pushed.\n",data);
    }

}
void pop(){
    if(isEmpty()){
        printf("The Stack is Empty.");
    }
    else{
        printf("%d is popped.\n",stack[top]);
        top--;
    }
}
void peek(){
	if(isEmpty()){
		printf("The Stack is Empty.");
	}
	else{
		printf("%d is Peeked.\n",stack[top]);
	}
}
void display(){
    if(isEmpty()){
        printf("The Stack is Empty.");
    }
    else{
        int i;
        for(i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}

int main(){
    char choice;
    printf("Welcome to Stack Implementation.\n");
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
