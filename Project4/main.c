#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c;
	printf ("Input namber a:\n");
	if (scanf("%d", &a) != 1)
	{
		printf("Incorrect");
		return 1;
	}
	printf("Input namber b : \n");
	if (scanf("%d", &b) != 1)
	{
		printf("Incorrect");
		return 1;}
	printf ("Input number c:\n");
	if (scanf("%d", &c) != 1)
	{
		printf("Incorrect");
		return 1;
	}
	if (b < 0 && a > 0 && b>a)
	{
		printf("%d", a-abs(b%a));
	}
	if (a < 0 && b > 0 && b>a)
	{
		printf("%d", abs(a) - abs(b % a));
	}
	if (a > 0 && b > 0 && b>a)
	{
		printf("%d", b%a);
	}
	if (a < 0 && b < 0 && b>a) 
	{
		printf("%d", abs(b) % abs(a));
	}
	return 0;
}