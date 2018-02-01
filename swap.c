#include<stdio.h>
void main()
{
int t1,t2;
printf("enter the t1\n");
scanf("%d",t1);
printf("enter the t2\n");
scanf("%d",t2);
t1=t2;
t2=t1;
printf("\nbefore swapping:%d %d",t1,t2);
printf("\nafter swapping:%d %d",t2,t1);
}
