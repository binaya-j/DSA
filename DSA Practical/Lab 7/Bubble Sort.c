//Bubble Sort

#include<stdio.h>
#include<conio.h>

void display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

void bubble_sort(int arr[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	display(arr,n);
}

int main(){
	int n,i;
	printf("Enter the no.of Values to sort: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the numbers to sort : \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	return 0;
}
