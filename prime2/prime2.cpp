#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	const int n=100;
	bool a[n];
	int i,j;
	for (i=1;i<n;i++)
		a[i]=true;
	for (i=1;i<n;i++)
	{
		if (a[i])
		{
			for (j=2;(i+1)*j-1<n;j++)
			{
				a[(i+1)*j-1]=false;
			}
		}
	}
	for (i=1;i<n;i++)
		if (a[i])
			printf("%d ",i+1);
	system("pause");
	return 0;
}