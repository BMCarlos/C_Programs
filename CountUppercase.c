#include <stdio.h>
#include <string.h>
	
	int main()
	{
		int upper,i = 0;
		char str[500];
		printf("Enter a string: ");

		fgets(str, sizeof(str), stdin);
		for(i = 1; i < str[i] != '\0'; i++)
		{
			if(str[i] >= 'A' && str[i] <= 'Z')
				upper++;
		}
		
		printf("The number of uppercase letters is %d\n", upper);
		return 0;
	}
