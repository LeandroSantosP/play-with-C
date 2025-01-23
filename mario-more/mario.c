#include <cs50.h>
#include <stdio.h>

int show_left_pyramid(int height, int current_row);
int show_right_pyramid(int height, int current_row);
int start(int height);

int main(void)
{
	int height;
	do
	{
		height = get_int("What's the height?? ");
	} while (height < 0);
	start(height);
}

int start(int height)
{
	for (int row = 0; row < height; row++)
	{
		show_left_pyramid(height, row);
		printf("  ");
		show_right_pyramid(height, row);
		printf("\n");
	}
}

int show_left_pyramid(int height, int current_row)
{
	for (int col = 0; col < height; col++) // left side
	{
		if (col >= height - current_row - 1)
		{
			printf("#");
		}
		else
		{
			printf(" ");
		}
	}
}

int show_right_pyramid(int height, int current_row)
{
	for (int col = 0; col < height; col++) // right side
	{
		if (col >= height - current_row - 1)
		{
			printf("#");
		}
	}
}