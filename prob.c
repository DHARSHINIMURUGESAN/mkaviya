#include<stdio.h>
void  main()
{
int a[200],n,i,j,k,c;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(j=0;j<n;j++)
{
for(k=0;k<n;k++)
{
c=a[j];
a[j]=a[k];
a[k]=c;
}
}
printf("%d",c);
}
