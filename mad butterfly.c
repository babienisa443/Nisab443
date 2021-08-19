#include<stdio.h>
int main()
{
    int i,h,j,pr;
    scanf("%d",&h);

    for(i=0;i<=h-1;i++)
    {
        for(j=1;j<=i;j++)
            printf("*  ");
        for(pr=1;pr<=2*(h-i);pr++)
            printf("   ");
            putchar('\b');
            putchar('\b');
                putchar('\b');
        for(j=i;j>=1;j--)
            printf("*  ");
    printf("\n");

    }

    for(i=h;i>=0;i--)
    {
        for(j=1;j<=i;j++)
            printf("*  ");
        for(pr=1;pr<=2*(h-i);pr++)
            printf("   ");
        putchar('\b');
        	putchar('\b');
    			putchar('\b');

        for(j=i;j>=1;j--)
            printf("*  ");
    printf("\n");

    }
    return 0;
}

