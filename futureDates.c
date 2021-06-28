#include <stdio.h>
	
	int main(int argc, char** argv)
	{
	const char *days[7]; 
	days[0] = "Sunday";
	days[1] = "Monday";
	days[2] = "Tuesday";
	days[3] = "Wedneseday";
	days[4] = "Thursday";
	days[5] = "Friday";
	days[6] = "Saturday";
	
	
	int i, elapse;
	printf("Enter today's day: ");
	scanf("%d", &i);
	printf("Enter the number of days elapsed since today: ");
	scanf("%d", &elapse);
	
	int temp = i;
	int s = elapse;
	if(elapse>i)
	{
	while (s>7)
	//s = days elapsed
	s = s%7;
	//temp is current day
	temp = s+i;
	}
	else
	temp = s+i;
	printf("Today is %s and the future day is %s\n", days[i], days[temp]);
	
	
	
	
	}
