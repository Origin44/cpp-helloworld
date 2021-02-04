#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num=2,sum=0,i=1;
	for (;num<=100;i++)
	{
		sum+=num;
		num*=2;
	}
	printf("%.1f\n",0.8*sum/(i-1));
	system("pause");
	return 0;
}