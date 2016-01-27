#include<stdio.h>
void main()
{
	int s[100],n,b=0,i;
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		s[i]=n%2;
		n=n/2;
		b++;
	}
	printf("\n%d",b);
	return 0;
}
