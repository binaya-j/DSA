//Selection Sort

#include<stdio.h>
#include<conio.h>

void display(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}

void selection_sort(int arr[],int n){
	int i,j,minvalue,minindex,temp;
	for(i=0;i<n-1;i++){
		minvalue=arr[i];
		minindex=i;
		for(j=i;j<n;j++){
			if(arr[minindex]>arr[j]){
				minvalue=arr[j];
				minindex=j;
			}
		}
		if(minindex != i){
			temp=arr[i];
			arr[i]=arr[minindex];
			arr[minindex]=temp;
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
	selection_sort(arr,n);
	return 0;
}
