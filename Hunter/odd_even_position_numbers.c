#include<stdio.h>
int main(void)
{
	int a[100],n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			if(a[i]%2!=0)
			{
				printf("%d",a[i]);
			}
		}
		else
		{
			if(a[i]%2==0)
			{
				printf("%d",a[i]);
			}
		}
	}
}
