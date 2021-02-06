#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char name[20];
	int i,j,len;
	bool fl;
	char James[]="James";
	while (1)
	{
		gets_s(name);
		if (!strcmp(name,"End"))
			break;
		len=strlen(name);
		fl=false;
		for (i=0;i<len;i++)
		{
			if (name[i]=James[0])
			{
				for (j=0;j<4;j++)
				{
					if (name[i]==James[j])
					{
						i++;
					}
					else break;
				}
				if (j==4) fl=true;
			}
		}
		if (fl)
			printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}