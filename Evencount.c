#include<stdio.h>
int main()
{
	int a,b,i;
	scanf("%d %d",&a,&b);
	for(i=a+1;i<b-1;i++)
	{
		if(i%2!=0)
		{
			i++;
		}
		printf("%d ",i);
	}
	
	
}
