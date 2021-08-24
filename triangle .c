#include <stdio.h>
#include <math.h>
 //find Triangle area
void main()
{
    int s, a, b, c, area;
 
    printf("Enter the values of a b and c \n");
    scanf("%d %d %d", &a, &b, &c);
    /* compute s */
	s = (a + b + c)/2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    if(area!=0){
	
    printf("Area of a triangle = %d \n", area);
    
}
	else{
	
	printf("0");
}
}
