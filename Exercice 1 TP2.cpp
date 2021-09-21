#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>

int main()
{
	int a = 0;
	int b = 0;
	int total = 0;

	printf("entrer le nombre a : ");
	scanf("%d", &a);
	
	printf("entrer le nombre b : ");
	scanf("%d", &b);

	total = a/b;
	printf("\n Le produit des 2 nombres est : %d", total);
}