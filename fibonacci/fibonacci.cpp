#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,a[16]={0};
	scanf_s("%d",&n);
	a[1]=a[2]=1;
	for (i=3;i<=n;i++)
	{
		a[i]=a[i-1]+a[i-2];
	}
	printf("%d",a[n]);
	system("pause");
	return 0;
}