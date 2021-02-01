#include<stdio.h>
#include<stdlib.h>
int main()
{
	int abs,num;
	int r=scanf_s("%d",&num);
	if (r==1)
	{
		if (num>0) abs=num;
		else abs=-num;
		printf("%d\n",abs);
	}
	else printf("error\n");
	system("pause");
	return 0;
}