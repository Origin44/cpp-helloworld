#include<stdio.h>
#include<stdlib.h>
#define student 10

int main()
{
	int i,max=0,maxi=0,tmp,a[student];
	for (i=0;i<student;i++)
	{
		scanf_s("%d",&tmp);
		if (tmp>max)
		{
			max=tmp;
			maxi=i;
		}
	}
	printf("%d %d",max,maxi+1);
	system("pause");
	return 0;
}