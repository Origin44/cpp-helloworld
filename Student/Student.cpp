#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	char name[20];
	int id,ch,en,math;
}student;

int main()
{
	const int stnum=4;
	int i,j,max;
	student s[stnum],tmp;
	for (i=0;i<stnum;i++)
	{
		scanf_s("%s%d%d%d%d",s[i].name,19,&s[i].id,&s[i].ch,&s[i].math,&s[i].en);
	}
	for (i=0;i<stnum;i++)
	{
		max=i;
		for (j=i+1;j<stnum;j++)
		{
			if (s[j].ch>s[max].ch) max=j;
		}
		tmp=s[i];
		s[i]=s[max];
		s[max]=tmp;
	}
	for (i=0;i<stnum;i++)
		{
			printf("%s %d %d %d %d\n",s[i].name,s[i].id,s[i].ch,s[i].math,s[i].en);
		}
	system("pause");
	return 0;
}