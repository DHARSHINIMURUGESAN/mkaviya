#include<stdio.h>
#incluede<conio.h>
void main()
{
char a[10]="hlo friend";
int i,count=0;
for(i=0;a[i]!='/0';i++)
{
if(a[i]=='')
count++;
}
printf(" the no of spaces are %d",count);
}
