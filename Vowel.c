#include<stdio.h>
int main()
{
	char n;
	scanf("%c",&n);
	if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u')
	{
		printf("Vowel");
	}
	else if(n=='b' || n=='c' || n=='d' || n=='f' || n=='g' || n=='h' || n=='j' || n=='k' || n=='l' || n=='m' || n=='n' ||
	n=='p' || n=='q' || n=='r' || n=='s' || n=='t' || n=='v' || n=='w' || n=='x' || n=='y' || n=='z')
	{
		printf("Consonant");
	}
	else
	{
		printf("Invalid");
	}
}
