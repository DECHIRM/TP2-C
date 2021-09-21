#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>

int main()
{
	int i = 1;
	int j;
	int valeur;
	while (i <= 10) 
	{
		printf("%d", i);
		j = 1;
		while (j <= 10) 	
		{
			valeur = i * j;
			printf("\t%d", valeur);
			j++;
		}
		printf("\n");
		i++;
	}
}