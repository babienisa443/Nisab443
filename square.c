#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter number :");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0||i==n-1){
			printf("\t*");
			for(j=0;j<n-1;j++){
				printf("*");
			
			}
			printf("\n");
			continue;
		}
		 printf("\t* ");
         
        for(j=0; j<n-3; j++)
        {
        	printf(" ");
		}
		printf("*\n");
	}
	return 0;
}
