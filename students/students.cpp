#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	char grade[5];
	char department[3];
	char major[3];
	char cla[3];
	char number[4];
}student;

int main()
{
	int i,j;
	char str[14];
	scanf_s("%s",str,14);
	student s;
	for (i=0;i<4;i++)
	{
		s.grade[i]=str[i];
	}
	s.grade[i]='\0';
	for (j=0;j<2;j++)
	{
		s.department[j]=str[i++];
	}
	s.department[j]='\0';
	for (j=0;j<2;j++)
	{
		s.major[j]=str[i++];
	}
	s.major[j]='\0';
	for (j=0;j<2;j++)
	{
		s.cla[j]=str[i++];
	}
	s.cla[j]='\0';
	for (j=0;j<3;j++)
	{
		s.number[j]=str[i++];
	}
	s.number[j]='\0';
	printf("%s%s%s%s%s\n",s.grade,s.department,s.major,s.cla,s.number);
	system("pause");
	return 0;
}