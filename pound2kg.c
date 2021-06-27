#include <stdio.h>
	int main()
	{
	double lb,kg =0;
	printf("Enter a number in pounds: ");
	scanf("%le", &lb);
	//printf(lb);
	kg = lb*0.454; 
	printf("%.2f pounds is %.3f kilograms \n",lb, kg);
	}
