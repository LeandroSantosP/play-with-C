#include <cs50.h>
#include <stdio.h>

void show_left_side(int height, int row);
void show_right_side(int height, int row);
void start(int height);

int main(void)
{
	int height;
	do
	{
		height = get_int("What's the pyramid hight? ");
	} while (height <= 0);

	start(height);
}

void start(int height)
{
	for (int row = 0; row < height; row++)
	{
		show_left_side(height, row);
		printf("  ");
		show_right_side(height, row);
		printf("\n");
	}
}

void show_left_side(int height, int row)
{
	for (int col = 0; col < height; col++)
	{
		if (col >= height - row - 1)
		{
			printf("#");
		}
		else
		{
			printf(" ");
		}
	}
}

void show_right_side(int height, int row)
{
	for (int col = 0; col < height; col++)
	{
		if (col >= height - row - 1)
		{
			printf("#");
		}
	}
}