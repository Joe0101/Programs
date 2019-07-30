#include<stdio.h>
int main()
{
	int n,i,sum=0,val;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&val);
		sum=sum+val;
	}
	printf("%d",sum);
	return 0;
}
