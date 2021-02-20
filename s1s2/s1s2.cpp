#include<stdio.h>
#include<stdlib.h>

int main()
{
	char s1[50],s2[20];
	char *p1=s1,*p2=s2;
	scanf_s("%s",s1,20);
	scanf_s("%s",s2,20);
	for (;*p1!='\0';p1++);
	for (;*p2!='\0';p1++,p2++)
	{
		*p1=*p2;
	}
	*p1='\0';
	printf("%s\n",s1);
	system("pause");
	return 0;
}