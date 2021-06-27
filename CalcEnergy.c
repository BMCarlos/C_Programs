#include <stdio.h>
	int main()
	{
	double Itemp, M, Ftemp = 0;
	
	printf("Enter the amount of water in kilograms: ");
	scanf("%le", &M);
	printf("Enter the initial temperature: ");
	scanf("%le", &Itemp);
	printf("Enter the final temperature: ");
	scanf("%le", &Ftemp);
	
	double Q = M*(Ftemp-Itemp)*4184;
	printf("The energy need is %.1f \n", Q);
	}
