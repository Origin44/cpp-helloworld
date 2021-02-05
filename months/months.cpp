#include<stdio.h>
#include<stdlib.h>
#define month 12
//define后面不能加分号

int main()
{
	int a[month]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b;
	scanf_s("%d",&b);
	if (1<=b && b<=12)
	{
		printf("%d\n",a[b-1]);
	}
	else printf("Error");
	system("pause");
	return 0;
}