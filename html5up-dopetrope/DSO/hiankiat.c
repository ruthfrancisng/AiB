#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define TRIALS 100000

int doOne75()
{
	int first,second; 
	second = 0;
	for (int i = 0; i < 80; ++i)
	{
		first = (rand() % 4);
		if(first != 0)
		{
			second++;
		}
	}
	return second; 
}

int doOne50()
{
	int first,second; 
	second = 0;
	for (int i = 0; i < 80; ++i)
	{
		first = (rand() % 2);
		if(first != 0)
		{
			second++;
		}
	}
	return second; 
}

int main()
{
	srand(time(NULL));
	int counter = 0;
	for (int i = 0; i < TRIALS; ++i)
	{
		int x = doOne50();
		int y = doOne75();
		printf("x=%d,y=%d\n", x,y);
		if(x<y)
		{
			counter++;
		}

	}
	printf("%d\n", counter);
}