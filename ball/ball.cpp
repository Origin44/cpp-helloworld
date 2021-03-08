#include<stdio.h>
#include<stdlib.h>

int sum(int r,int w,int b,int mmr,int mmw)
{
	int s=0,i,j,sb;
	for (i=mmr;i<=r;i++)
	{
		for (j=mmw;j<=w;j++)
		{
			sb=r+b+w-i-j;
			if (sb>=0)
			{
				s++;
			}
		}
	}
	return s;
}

int main()
{
	printf("%d\n",sum(3,5,6,1,1));
	system("pause");
	return 0;
}