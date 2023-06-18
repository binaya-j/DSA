#include<stdio.h>

int main(){
	int a,b,c,d,i,j,k;
	printf("Enter the dimension of 1st matrix : ");
	scanf("%d %d",&a,&b);
	printf("Enter the dimension of 2nd matrix : ");
	scanf("%d %d",&c,&d);
	if(b!=c){
		printf("The Multiplication isn't possible.");
		exit(1);
	}
	int arr1[a][b],arr2[c][d],arr3[a][d];
	printf("Enter 1st Matrix data : ");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter 2nd Matrix data : ");
	for(i=0;i<c;i++){
		for(j=0;j<d;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<d;j++){
			arr3[i][j]=0;
			for(k=0;k<b;k++){
				arr3[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
	printf("The Multiplication of Matrix is : \n");
	for(i=0;i<a;i++){
		for(j=0;j<d;j++){
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}
	return 0;
}


