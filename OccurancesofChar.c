#include <stdio.h>
#include <string.h>
	
	int main()
	{
		char str[500];
		int count, i,k = 0;
		char c;
		
		printf("Enter a string: ");
		fgets(str, sizeof(str), stdin);
		
		printf("Enter a character to count: ");
		c = getchar();
		while(str[i] != '\0')
		{
			if(str[i]==c)
			{
			count++;
			}
			i++;
		}
		
		printf("The count of ");
		putchar(c);
		printf(" is %d\n",count);
		return 0;
	}
