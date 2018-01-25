#include <stdio.h>

int main(void)
{
	int min,hrs,mins,hr,d1hr,d1min;
	printf("\nEnter the first time: ");
	scanf("%d",&hr);
	scanf("%d",&min);
	printf("\nEnter the second time: ");
	scanf("%d",&hrs);
	scanf("%d",&mins);
	if(hrs>hr)
	{
		d1hr=hrs-hr;
		printf("\nThe difference is %d hours ans %d minutes",d1hr,d1min);
	}
	else
	{
		d1hr=hr-hrs;
		d1min=min-mins;
		printf("\nThe difference is %d hours and %d minutes",d1hr,d1min);
	}
	return 0;
}
