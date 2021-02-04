#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand((unsigned)time(NULL));
	int guess=rand()%100+1;
	for (;;)
	{
		int re;
		scanf_s("%d",&re);
		if (re==guess){
			printf("Right!\n");
			break;
		}
		if (re>guess)
			printf("big\n");
		else printf("small\n");
	}
	system("pause");
	return 0;
}