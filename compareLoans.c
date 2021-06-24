#include <stdio.h>
#include <math.h>
	int main()
	{
		double loanAmt = 0.0;
		int years = 0;
		double interestRate = 5.0;
		double monthlyPayment = 0;
		double totalPayment = 0;
		
		printf("Loan Amount: ");
		scanf("%lf", &loanAmt);
		
		printf("Number of Years: ");
		scanf("%d", &years);
		
		printf("%-10s %10s %10s\n", "Interest Rate", "Monthly Payment", "Total Payment");
		
		for (int k = 0; k < 25; k++)
		{
		
		//rate
		double r = (interestRate/100/12);
		//months
		double m = (years*12);
		double i = (1+r);
		//(i+r)^m
		double n = pow(i,m);
		
		monthlyPayment = (loanAmt*r)*(n)/(n-1);
		
		totalPayment = (monthlyPayment*m);
		printf("%-10.3f %12.2f %15.2f\n", interestRate, monthlyPayment, totalPayment);
	
		interestRate +=  0.125;
		}
	}
