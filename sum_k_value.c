#include<stdio.h>
int main()
{
int n,k,i,sum=0;
scanf("%d %d",&n,&k);
int a[n];
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=k;i++)
{

sum=sum+a[i];
}

printf("%d",sum);	
}
