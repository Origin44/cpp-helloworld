#include<stdio.h>
#include<stdlib.h>

int main()
{
	int l1,l2,sum=0,i,j,tmp;
	bool flag;
	char st1[10],st2[50];
	char *p1=st1,*p2=st2;
	scanf_s("%s",st2,49);
	scanf_s("%s",st1,9);
	for (l2=0;*p2!='\0';l2++,p2++);
	p1=st1;
	p2=st2;
	for (i=1;*p1!='\0';i++,p1++)
	{
		if (*p1=*p2)
		{
			tmp=i;
			flag=true;
			for (j=0;j<l2-1;j++)
			{
				if (*p1!=*p2)
				{
					flag=false;
					break;
				}
				p1++;
				p2++;
				i++;
			}
			if (flag)
			{
				printf("%d ",tmp);
				sum++;
			}
			p2=st2;
		}
	}
	printf("%d\n",sum);
	system("pause");
	return 0;
}