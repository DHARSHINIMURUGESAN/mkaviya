#include<stdio.h>
int main()
{
    int n,a[10],i,temp,j,m;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<n;j++)
    {
        for(m=j+1;m<n;m++)
        {
            if(a[j]>a[m])
            {
                temp=a[j];
                a[j]=a[m];
                a[m]=temp;
                
            }
        }
        printf("%d",a[j]);
  
    }
    return 0;
}
