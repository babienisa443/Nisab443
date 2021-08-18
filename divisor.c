#include<stdio.h>
int  main()
{
  int n,i,sum=0;


  printf("Input the  number : ");
  scanf("%d",&n);
    printf("The positive divisor  : ");
    for (i=1;i<n;i++)
      {
      if(n%i==0){
      sum=sum+i;
         printf("%d",i);
         printf("+");
        } 
 }
      printf("\b ");
	  printf("\nThe sum of the divisor is : %d",sum);
    
}
