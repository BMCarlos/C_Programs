#include <stdio.h>

	int main()
	{
		int lim, fib,output;
		//int c =0;
		//int even[c];
		int f1 =0;
		int f2 =1;
		int temp = f1+f2;
		printf("Enter the limit: ");
		scanf("%d", &lim);
		printf("Input : limit = %d\n", lim);
		printf("Exaplanation: ");

		int i;
		for(i = 3; i <= lim; ++i)
		{
			f1 = f2;
			f2 = temp;
			temp = f1+f2;
			if(temp %2 == 0)
			{
			printf("%d + ", temp);
			output += temp;
			}
			//even[c] = temp;
			//c++;
		}
		printf("= %d", output);
		return 0;
		
	}
