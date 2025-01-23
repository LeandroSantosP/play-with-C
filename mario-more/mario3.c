#include <stdio.h>

void start(int height);
void show_left_pyramid(int height, int row);
void show_right_pyramid(int height, int row);

void main(void)
{
	int height;

	do
	{
		height = 5;
	} while (height <= 0);

	start(height);
}

void start(int height)
{
	for (int row = 0; row < height; row++)
	{
		show_left_pyramid(height, row);
		printf("  ");
		show_right_pyramid(height, row);
		printf("\n");
	}
}

void show_left_pyramid(int height, int row)
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

void show_right_pyramid(int height, int row)
{
	for (int col = 0; col < height; col++)
	{
		if (col >= height - row - 1)
		{
			printf("#");
		}
	}
}