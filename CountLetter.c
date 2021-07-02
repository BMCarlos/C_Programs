#include <stdio.h>
	int main()
	{
		int ltrs,i = 0;
		char str[500];
		printf("Enter a string: ");

		fgets(str, sizeof(str), stdin);
		for(i = 1; i < str[i] != '\0'; i++)
		{
			if(str[i] >= 'A' && str[i] <= 'Z'||str[i] >= 'a' && str[i] <= 'z')
				ltrs++;
		}
		
		printf("The number of letters is: %d\n", ltrs);
		return 0;
	}
