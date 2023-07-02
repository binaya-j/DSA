//Insertion Sort

#include<stdio.h>
#include<conio.h>

void display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

void insertion_sort(int arr[],int n){
	int i,j,key;
	for(i=1;i<n;i++){
		key=arr[i];
		j=i-1;
		while(j>=0 && key<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
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
	insertion_sort(arr,n);
	return 0;
}
