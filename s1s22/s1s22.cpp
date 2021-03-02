#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sum=0,i,tmp;
	bool flag;
	char st1[50],st2[10];
	char *p1=st1,*p2=st2;
	gets(st1);
	gets(st2);
	p1=st1;
	p2=st2;
	for (i=1;*p1!='\0';)
	{
		if (*p1==*p2)
		{
			tmp=i;
			flag=true;
			for (;*p2!='\0';)
			{
				if (*p1!=*p2)
				{
					flag=false;
					break;
				}
				p2++;
				if (*p2!='\0')
				{
					p1++;
					i++;
				}
			}
			if (flag)
			{
				printf("%d\n",tmp);
				sum++;
			}
			p2=st2;
		}
		else
		{
			i++;
			p1++;
		}
	}
	printf("%d\n",sum);
	system("pause");
	return 0;
}