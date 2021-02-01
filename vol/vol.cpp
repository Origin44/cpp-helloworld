#include<stdio.h>
#include<stdlib.h>

int volume(int a,int b,int c)
{
	int p=a*b*c;
	return p;
}

int main()
{
	int x,y,z,v;
	x=y=z=v=10;
	scanf_s("%d%d%d",&x,&y,&z);
	v=volume(x,y,z);
	printf("%d\n",v);
	system("pause");
	return 0;
}