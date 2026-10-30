#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int numeri[5] = {};

	for (int i = 0; i < (sizeof(numeri) / sizeof(numeri[0])); i++)
	{
		printf("inserisci un numero: \n");

		scanf("%d", &numeri[i]);
	}

	int numeroPiccolo = numeri[0];

	int numeroGrande = numeri[0];

	for (int i = 0; i < (sizeof(numeri) / sizeof(numeri[0])); i++)
	{
		if (numeroPiccolo > numeri[i])
		{
			numeroPiccolo = numeri[i];
		}
		

		if (numeroGrande < numeri[i])
		{
			numeroGrande = numeri[i];
		}
		
	}

	printf("il numero piu grande e': %d \n", numeroGrande);

	printf("il numero piu piccolo e': %d \n", numeroPiccolo);

	printf("la media e': %d", (numeri[0] + numeri[1] + numeri[2] + numeri[3] + numeri[4]) / (sizeof(numeri) / sizeof(numeri[0])));
}