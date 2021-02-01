#include<stdio.h>
#include<stdlib.h>

int main()
{
	float c,f;
	int fl;
	fl=scanf_s("%f",&c);
	if (fl==1)
	{
		f=1.8*c+32;
		printf("%.2f",f);
	}
	else printf("error");
	system("pause");

}