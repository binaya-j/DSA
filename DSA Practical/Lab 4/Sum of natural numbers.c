#include<stdio.h>

int Sum(int a){
	return (a==0)?(0):a+Sum(a-1);
}

int main(){
	int num,add;
	printf("Enter a number to find sum of natural numbers : ");
	scanf("%d",&num);
	add=Sum(num);
	printf("The sum of natural numbers upto %d is %d.",num,add);
	return 0;
}
