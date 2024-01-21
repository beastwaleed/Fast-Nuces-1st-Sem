#include<stdio.h>

int main() {

	int time_hours;
	printf("Enter time (in hours) \n");
	scanf("%i", &time_hours);
	
	int time_seconds;
	time_seconds= time_hours * 3600;
	
	printf("Time in hours= %i\n \n", time_hours);
	printf("Time in seconds= %i\n", time_seconds);
	
	return 0;
	
}	 


	
