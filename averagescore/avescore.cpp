#include<stdio.h>
#include<stdlib.h>

float average(float *a,int n)
{
	int i;
	float sum=0;
	for (i=0;i<n;i++)
	{
		sum+=*a;
		a++;
	}
	return (sum/n);
}

int main()
{
	float a[5]={56,90,88,68,77};
	printf("average score=%.2f\n",average(a,5));
	system("pause");
}