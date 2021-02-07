#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	const int n=100;
	bool a[n];
	int i,j;
	for (i=2;i<n;i++)
	{
		a[i]=true;
		for (j=2;j<=sqrt((float)(i+1));j++)
		{
			if (((i+1)%j)==0)
			{
				a[i]=false;
				break;
			}
		}
	}
	for (i=1;i<n;i++)
		if (a[i])
			printf("%d ",i+1);
	system("pause");
	return 0;
}