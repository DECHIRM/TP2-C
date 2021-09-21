#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>

int main()
{
	int a = 0;
	printf("Poids de la lettre : ");
	scanf("%d", &a);
	
	if (a > 0 && a < 20)
	{
		printf("\n Prix 3.00 frs");
	}
	if (a >= 20 && a < 50)
	{
		printf("\n Prix 3.95 frs");
	}
	if (a >= 50)
	{
		printf("\n Prix 5.90 frs");
	}
}