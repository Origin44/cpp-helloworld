#include<stdio.h>
#include<stdlib.h>

void swap(int *x,int *y)
{
	int z;
	z=*y;
	*y=*x;
	*x=z;
	return;
}

int main()
{
	int a,b;
	scanf_s("%d%d",&a,&b);
	swap(&a,&b);
	printf("%d %d\n",a,b);
	system("pause");
}