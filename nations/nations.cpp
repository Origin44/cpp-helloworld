#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j;
	scanf_s("%d",&n);
	char nation[50][10];
	char *p[50],*tmp;
	for (i=0;i<n;i++)
	{
		scanf_s("%s",nation[i],9);
		p[i]=nation[i];
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (*p[j]>*p[j+1])
			{
				tmp=p[j+1];
				p[j+1]=p[j];
				p[j]=tmp;
			}
		}
	}
	for (i=0;i<n;i++)
	{
		printf("%s\n",p[i]);
	}
	system("pause");
	return 0;
}