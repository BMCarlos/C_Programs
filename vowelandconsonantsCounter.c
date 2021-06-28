#include <stdio.h>
#include <string.h>
	
	int main()
	{
		int vowels, consonants = 0; 
		char ltr = ' ';
		
		char sentance[500];
	
		
		
		
		printf("Enter a string: ");
		scanf("%s", sentance);
		int i,index,spc;
		//char str = sentance;
		for(i=0; sentance[i] != '\0'; ++i)
		{
		/*	if((sentance[index] >= 'a' && sentance[index] <= 'z') || 
			(sentance[index] >= 'A' && sentance[index] <= 'Z'))
			{
				consonants++;
			}
			else if ((sentance[index] = 'a') || (sentance[index] = 'e') || 				(sentance[index] = 'i') || (sentance[index] = 'o') ||
			(sentance[index] = 'u') || (sentance[index] = 'A') || 
			(sentance[index] = 'E') || (sentance[index] = 'I') ||
			(sentance[index] = 'O') || (sentance[index] = 'U'))
			{
			vowels++;
			}
		*/
		if (sentance[i] == 'a' || sentance[i] == 'e' || 
			sentance[i] == 'i' || sentance[i] == 'o' ||
			sentance[i] == 'u' || sentance[i] == 'A' || 
			sentance[i] == 'E' || sentance[i] == 'I' ||
			sentance[i] == 'O' || sentance[i] == 'U')
			{
			++vowels;
			}	
			else if 
			((sentance[i] >= 'a' && sentance[i] <= 'z') || 
			(sentance[i] >= 'A' && sentance[i] <= 'Z'))
			{
				++consonants;
			}
			else if
			(sentance[i] == ' ');
			{
			++spc;
			}
			
			//i++;
		}
			//consonants = consonants - (spc + vowels); 
		//printf("Sentance entered: %s\n", sentance);
		printf("%s", sentance);
		printf("The number of vowels is %d \n", vowels);
		printf("The number of consonants is %d \n", consonants);
		return 0;
	}
