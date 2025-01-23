#include <cs50.h>
#include <stdio.h>

float get_avg(int length, int array[]);

const int N = 3;

void main(void)
{
	int scores[N];
	const int length = sizeof(scores) / sizeof(scores[0]);
	int idx = 0;
	do
	{
		scores[idx] = get_int("What's the grade? ");
		idx++;
	} while (idx < length);

	printf("Average: %.3f\n", get_avg(length, scores));
}

float get_avg(int length, int array[])
{
	float total = 0;
	for (int i = 0; i < length; i++)
	{
		total += array[i];
	}
	return total / (float)length;
}