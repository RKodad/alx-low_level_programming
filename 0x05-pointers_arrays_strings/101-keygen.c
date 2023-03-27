#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a;
	int count;
	int sum;

	srand(time(NULL));
	for (count = 0, sum = 2772; sum > 122; count++)
	{
		a = (rand() % 125) + 1;
		printf("%c", a);
		sum -= a;
	}
	printf("%c", sum);

	return (0);
}

