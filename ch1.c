#include <stdio.h>
#include<string.h>
int main() 
{
	char s[20],p[20];
	int length,length1,i,j,count=0;
	scanf("%s\n",s);
	scanf("%s\n",p);
	length=strlen(s);
	length1=strlen(p);
	if(length==length1)
	{
		for(i=0;i<length;i++)
		{
			if(s[i]==p[i])
			{
				count=0;
				}
			else
      }
			count=count+1;
		}
		if(count==1)
		{
			printf("yes\n");
		}
	else
  {
	printf("no\n");
  }
	return 0; 
}
