#include<stdio.h>

int gcd(int a,int b){
	return (b==0)?a:gcd(b,a%b);
}

int main(){
	int a,b,g;
	printf("Enter two numbers to find gcd : ");
	scanf("%d %d",&a,&b);
	g=gcd(a,b);
	printf("The gcd of %d and %d is : %d.",a,b,g);
	return 0;
}
