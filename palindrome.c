#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

	int main()
	{
	
	
	int integer,palindrome = 0,r;
	printf("Enter a three-digit integer: ");
	scanf("%d", &integer);
	int num = integer;
	while(integer != 0)
	{
		r = integer%10;
		palindrome = palindrome*10 + r;
		integer = integer/10; 
	}
	if(num == palindrome)
		printf("%d is a palindrome \n", num);
		
		else
		printf("%d is not palindrome \n", num);
	printf("Reverse: %d\n", palindrome);
	
	return 0;
	}
