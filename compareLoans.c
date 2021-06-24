/*
 * compareLoans.c
 *
 *  Created on: Jun 21, 2021
 *      Author: vaidya
 */
#include <stdio.h>
	int main(int argc, char** argv)
	{
		double loanAmt = 0.0;
		int years = 0;
		double interestRate = 5.0;
		double monthlyPayment = 0;
		double totalPayment = 0;
		
		printf("Loan Amount: ");
		scanf("%lf", &loanAmt);
		
		printf("Number of Years: ");
		scanf("%lf", &years);
		
		printf("%-10s %10s %10s\n", "Interest Rate", "Monthly Payment", "Total Payment");
		
		for(int i = 0; i == years; i++)
		{
		for (int k = 0; k == 25; k++)
		{
		printf("%-10f %12f %15f", interestRate, monthlyPayment, totalPayment);
		loanAmt
		monthlyPayment+totalPayment;
		interestRate +=  0.125;
		
		
		}
		
		}
		
		
	}
