#include<stdio.h>
#include<conio.h>

int main(){
	int a,i,j,temp;
	printf("Enter number of data to sort : ");
	scanf("%d",&a);
	int arr[a];
	printf("Enter %d data : ",a);
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
	}
	for(i=a-1;i>=0;i--){
		for(j=0;j<i;j++){
			if(arr[j]<arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;	
			}
		}
	}
	printf("The Sorted data is : \n");
	for(i=0;i<a;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
