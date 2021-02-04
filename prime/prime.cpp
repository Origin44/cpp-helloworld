#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int n,i;
	scanf_s("%d",&n);
	bool fl=1;
	for (i=2;i<=sqrt((float)n);i++)
	{
		if (n%i==0){
			fl=0;
			break;
		}
	}
	if (fl) printf("Yes\n");
	else printf("No\n");
	system("pause");
	return 0;
}