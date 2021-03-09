#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	int *p,n,max=0,min,i;
	cin>>n;
	min=n+1;
	p=new int[n];
	for (i=0;i<n;i++)
	{
		p[i]=rand()%(i+2);
		cout<<p[i]<<" ";
		if (p[i]>max)
		{
			max=p[i];
		}
		if (p[i]<min)
		{
			min=p[i];
		}
	}
	cout<<endl<<"Max is "<<max<<" Min is "<<min<<endl;
	delete []p;
	system("pause");
	return 0;
}