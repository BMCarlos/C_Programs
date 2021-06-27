#include <math.h>
#include <stdio.h>

	int main()
	{
	double wtlb,htin;
	double wtkg, htm;
	
	printf("Enter weight in pounds: ");
	scanf("%le", &wtlb);
	printf("Enter height in inches: ");
	scanf("%le", &htin);
	
	wtkg = (wtlb * 0.45359237);
	htm = (htin *0.0254);
	double htsq = pow(htm, 2);
	double bmi = (wtkg/htsq);
	printf("BMI is  %.4f \n", bmi);
	
	}
