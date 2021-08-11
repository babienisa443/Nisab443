#include<stdio.h>
#include<conio.h>
int main(){
 int k,x=2,y;
 printf("enter number:");
 scanf("%d",&k);
 printf("Factory Result :");
  while(k!=1){
   while(k%x==0){
     k=k/x;
     printf("%d",x);
     if(y<k) {
     	printf(" x ");
     	}
     }
     
    
    x++;
    }
   
	return 0; 
  }


  
  
 
