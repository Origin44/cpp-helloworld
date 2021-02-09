#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a[]={16,8,4,32,5};
	int i,j;
	for (i=0;i<5;i++)
	{
		for (j=0;j<5-i-1;j++)
		{
			if (a[j]>a[j+1])
			{
				a[j]^=a[j+1];
				a[j+1]^=a[j];
				a[j]^=a[j+1];
			}
		}
	}
	for (i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	system("pause");
	return 0;
}