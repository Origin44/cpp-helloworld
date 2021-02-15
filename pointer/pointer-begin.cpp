#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,*p_max=&a,*p_min=&b,*ptmp;
	scanf_s("%d%d",&a,&b);
	if (*p_max<*p_min)
	{
		ptmp=p_max;
		p_max=p_min;
		p_min=ptmp;
	}
	printf("%d %d\n",*p_min,*p_max);
	system("pause");
	return 0;
}