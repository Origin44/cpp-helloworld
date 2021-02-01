#include<stdio.h>
#include<stdlib.h>

int main()
{
	float a,b,c,requirement;
	int fl;
	fl=scanf_s("%f %f %f %f",&a,&b,&c,&requirement);
	if (fl==4)
	{
		if (a+b+c<requirement)
		{
			printf("Yes\nleft is %.2f",a+b+c-0.36);
		}
		else printf("No\nleft is %.2f",a+b+c-1.2);
	}
	system("pause");
	return 0;
}