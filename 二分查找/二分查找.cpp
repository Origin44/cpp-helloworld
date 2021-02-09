#include<stdio.h>
#include<stdlib.h>

int main()
{
	const int n=10;
	int a[n]={1,2,3,4,5,6,7,8,9,10};
	int  num,first=0,end=n-1,mid=(first+end)/2;
	scanf_s("%d",&num);
	for (;a[mid]!=num;)
	{
		if (a[mid]>num)
		{
			end=mid-1;
			mid=(first+end)/2;
		}
		else
		{
			first=mid+1;
			mid=(first+end)/2;
		}
	}
	printf("%d\n",mid+1);
	system("pause");
	return 0;
}