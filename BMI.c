#include<stdio.h>
int main(){
	 float w,h,BMI;
	printf("Your weige : ");
	scanf("%f",&w);
	printf("Your high :");
	scanf("%f",&h);
	BMI=w/h*h;
	printf("Your BMI : %f\n",BMI);
	if(BMI<18.5){
		printf("underweige\n");
	}else if(18.5<=BMI<=24.9){
		printf("normal\n");
	}else if(25.0<=BMI<=29.9){
		printf("above standard\n");
	}else{
		printf("dangerous");
	}
	
	
	return 0;
}
