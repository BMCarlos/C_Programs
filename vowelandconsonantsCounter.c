#include <stdio.h>
#include <string.h>
	
	int main()
	{
		int vowels, consonants = 0; 
		char sentance[500];
		printf("Enter a string: ");
		scanf("%99[^\n]",sentance);
		int i,index,spc,k = 0;
		while(k<=sentance[k])
			{
			if(sentance[k] == ' ')
			{
			spc++;
			}
			k++;
			}
		while(sentance[i] != '\0')
		{	
			if (sentance[i] == 'a' || sentance[i] == 'e' || 
			sentance[i] == 'i' || sentance[i] == 'o' ||
			sentance[i] == 'u' || sentance[i] == 'A' || 
			sentance[i] == 'E' || sentance[i] == 'I' ||
			sentance[i] == 'O' || sentance[i] == 'U')
			{
			++vowels;
			}	
			else {
			consonants++;
			}
			
			i++;
		}
			consonants = consonants - (spc-1); 
		printf("The number of vowels is %d \n", vowels);
		printf("The number of consonants is %d \n", consonants);
		return 0;
	}
