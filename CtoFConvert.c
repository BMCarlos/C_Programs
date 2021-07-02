#include <stdio.h>

	int main()
	{
		double cels, fahr;
		
		printf("Enter a degree in Celsius: ");
		scanf("%lf", &cels);
		
		fahr = ((1.8)*cels);
		fahr = fahr +32;
		
		printf("%.2f Celsius is %.2f Fahrenheit\n", cels, fahr);
	}
