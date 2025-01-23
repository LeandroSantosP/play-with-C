#include <cs50.h>
#include <stdio.h>

int mario(int amount);

int main(void)
{
	mario(10);
}

int mario(int amount)
{
	for (int i = 0; i < amount; i++) // row so going down
	{
		printf("row: %i ", i);
		for (int j = 0; j < amount; j++) // col so going forward
		{
			if (i >= j)
			{
				printf("#");
			}
		}
		printf("\n"); // -> next row
	}
}