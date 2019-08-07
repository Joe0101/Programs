#include<stdio.h>
int main()
{
	int n,i,flag=1;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		flag++;
	}
	printf(flag==2? "yes":"no");
	
}
