#include<stdio.h>
int main()
{
int num,r,sum=0,temp;
printf("enter a number:");
scanf("%d",&num);
temp=num;
while(num!=0)
{
r=num%10;
num=num/10;
sum=sum+(r*r*r);
}
if(sum == temp)
printf("%d is an armstrong number",temp);
else
printf("%d is not an armstrong number",temp);
return 0;
}
