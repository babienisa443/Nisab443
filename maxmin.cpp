#include<stdio.h>
/*fine maxmin value 
input 5 1 2 3 4 5
output 1
       5*/
       
int main()
{  int a[1000],min=2000000001,max=-2000000001,n,i;
   scanf("%d",&n);
   for(i=0;i<n;i++){
   		scanf("%d",&a[i]);
    if(min>=a[i])
	{
       		min=a[i];
       	}
    if(max<=a[i])
	{
    		max=a[i];
			}
}
    printf("%d\n%d",min,max);		
	return 0;
	}

