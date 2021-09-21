#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("entrer le nombre a : ");
	scanf("%d", &a);
	printf("entrer le nombre b : ");
	scanf("%d", &b);
	printf("entrer le nombre c : ");
	scanf("%d", &c);

	if (a > b && a > c)
	{
		if (b > c)
		{
			printf("\n Les nombres dans l'ordre croissant %d, %d, %d", c, b, a);
		}
		else 
		{
			printf("\n Les nombres dans l'ordre croissant %d, %d, %d", b, c, a);
		}
	}
	if (b > c && b > a) 
	{
		if(c > a) 
		{
			printf("\n Les nombres dans l'ordre croissant %d, %d, %d", a, c, b);
		}
		else 
		{
			printf("\n Les nombres dans l'ordre croissant %d, %d, %d", c, a, b);
		}
	}
	if (c > b && c > a)
	{
		if (b > a)
		{
			printf("\n Les nombres dans l'ordre croissant %d, %d, %d", a, b, c);
		}
		else 
		{
			printf("\n Les nombres dans l'ordre croissant %d, %d, %d", b, a, c);
		}
	}
}