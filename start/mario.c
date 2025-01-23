#include <cs50.h>
#include <stdio.h>

void print_row(int n);

int main()
{
	const col = get_int("virtinal size: ");
	const int row = get_int(" horizontal size: ");
	for (int i = 0; i < col; i++)
	{
		print_row(row);
	}
}

void print_row(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("#");
	}
	printf("\n");
}