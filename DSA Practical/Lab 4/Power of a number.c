#include<stdio.h>

int Power(int a,int b){
	return (b==0)?(1):a*Power(a,b-1);
}

int main(){
	int base,power,result;
	printf("Enter base and power of a number: ");
	scanf("%d %d",&base,&power);
	result=Power(base,power);
	printf("The Result is : %d",result);
	return 0;
}
