#include<stdio.h>

int factorial(int a){
	return (a==0||a==1)?1:a*factorial(a-1);
}

int main(){
	int num,fact;
	printf("Enter a number to find its factorial : ");
	scanf("%d",&num);
	fact=factorial(num);
	printf("The Factorial of %d is %d.",num,fact);
	return 0;
}
