#include <stdio.h>
#include <math.h>

	int main()
	{
		double area,volume, radius, length;
		
		printf("Enter the cylinder radius: ");
		scanf("%lf", &radius);
		printf("Enter the cylinder length: ");
		scanf("%lf", &length);
		
		area = (radius*radius)*M_PI;
		volume = area * length;
		
		printf("The area = %.2f \nThe volume = %.2f\n", area,volume);
	}
