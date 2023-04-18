#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t currentTime = time(NULL);
	struct tm *localTime = localtime(&currentTime);
	int hour = localTime->tm_hour;

	printf("current time in seconds [epoch] (%ld)\n", (long)currentTime);
	printf("current local time and date: %s\n", asctime(localTime));

	if(hour < 10){
		printf("Good morning.\n");
	}else if(hour < 20){
		printf("Good day.\n");
	}else{
		printf("Good evening.\n");
	}

	return (0);
}
