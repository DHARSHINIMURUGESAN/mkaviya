#include<stdio.h>
int main()
{
int array[30],size,i,max;
for(i=o;i<size;i++)
scanf("%d",&array[i]);
max = array[0];
for(i=1;i<size;i++)
{
if(max<array[i])
 max=array[i];
}
printf("the maximum num of array elements %d",max);
}
