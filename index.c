#include<stdio.h>
int main()
{
int i,j,a[10],n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
printf("%d\t%d\n",a[j],j);
}
}
