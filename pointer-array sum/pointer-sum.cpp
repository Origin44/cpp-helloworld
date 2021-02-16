#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,sum=0;
	scanf_s("%d",&n);
	int a[100],*pa=a;
	for (pa=a;pa<(a+n);pa++)
	{
		scanf("%d",pa);
	}
	pa=a;
	for (i=0;i<4;i++)
	{
		sum+=*pa;
		pa++;
	}
	printf("%d\n",sum);
	system("pause");
}