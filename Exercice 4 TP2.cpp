#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <iostream>

int main()
{
	int age = 0;
	char sexe = 0;
	int nbcinema = 0;
	char fastfood = 0;
	int fastfoodfrequence = 0;
	char sport = 0;
	int sportfrequence = 0;
	
	printf("Quel age a tu ? : ");
	scanf("%d", &age);

	printf("\n Homme ou femme ? : ");
	scanf("%c", &sexe);

	printf("\n Combien de fois par moi tu va au cinema ? : ");
	scanf("%d", &nbcinema);

	printf("\n Quel est ton fast food favoris ? : ");
	scanf("%c", &fastfood);

	printf("\n Combien de fois par moi tu va au %c ? : ", fastfood);
	scanf("%d", &fastfoodfrequence);

	printf("\n Quel est ton sport favoris ? : ");
	scanf("%c", &sport);

	printf("\n Combien de fois fait tu du %c par mois ? : ", sport);
	scanf("%d", &sportfrequence);

	printf("\n RECAP ");

	printf("\n AGE : %d", age);
	printf("\n SEXE : %c", sexe);
	printf("\n NB CINEMA : %d", nbcinema);
	printf("\n FASTFOOD : %c", fastfood);
	printf("\n FASTFOOD FREQUENCE : %d", fastfoodfrequence);
	printf("\n SPORT : %c", sport);
	printf("\n SPORT FREQUENCE : %d", sportfrequence);
}