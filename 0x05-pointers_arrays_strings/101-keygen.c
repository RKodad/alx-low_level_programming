#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int rand;
	int count;
	int sum;

	srand(time(NULL));
	for (count = 0, sum = 2772; sum > 122; count++)
	{
		rand = (rand() % 125) + 1;
		printf("%c", rand);
		sum -= rand;
	}
	printf("%c", sum);

	return (0);
}

