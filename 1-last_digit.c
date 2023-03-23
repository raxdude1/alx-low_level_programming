
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char dab[]= "Last digit of";
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 5)
	{
		printf("%s is greater than 5\n", dab);
	}
	else 
		if (n == 0)
	{
		printf("%s is 0 \n, dab);
	}
	else 
		if (n < 6 > 0)
	{
		printf("%s is less than 6 and not 0\n, dab);
	}
	return (0);
}
