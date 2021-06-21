#include <stdio.h>
#include <stdlib.h>
int main (int argc, char** argv)
{
	double priceA = 0;
	double priceB = 0;

	double weightA = 0;
	double weightB = 0;

	double priceFactorA = 0;
	double priceFactorB = 0;

	printf("Enter weight for package 1: ");
	scanf("%lf", &weightA);
	printf("Enter the price for the package 1: ");
	scanf("%lf", &priceA);

	printf("Enter weight for package 2: ");
	scanf("%lf", &weightB);
	printf("Enter the price for the package 2: ");
	scanf("%lf", &priceB);

	priceFactorA = (weightA/priceA);
	priceFactorB = (weightB/priceB);

	if(priceFactorA > priceFactorB)
	{
		printf("Package 1 has a better price");
	}
	else if(priceFactorA < priceFactorB)
	{
		printf("Package 2 has a better price.");
	}
	else if(priceFactorA == priceFactorB)
	{
		printf("Two packages have the same price.");
	}

}
