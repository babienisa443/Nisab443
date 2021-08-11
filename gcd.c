#include<stdio.h>
int main(){
	int x,y,gcd=1;
	printf("Enter first number :");
	scanf("%d",&x);
	printf("Enter second number:");
	scanf("%d",&y);
	while(y!=0){
		int t=y;
		y=x%y;
		x=t;
	}
	gcd=x;
	printf("Greatest common divisor = %d",gcd);
	return 0;
}
