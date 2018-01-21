#include<stdio.h>
int main()
{
int year;
printf("enter a year \n");
scanf("%d",&year);
if(((year % 400) == 0) && ((year % 100) == 0))
{
printf("%d the leap year is \n",year);
}
else
{
printf("%d the not leap year \n",year);
}
return 0;
}
