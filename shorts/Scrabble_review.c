#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdio.h>

int compute_score(string word);
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
	string player_one = get_string("Player 1: ");
	string player_two = get_string("Player 2: ");

	int score_one = compute_score(player_one);
	int score_two = compute_score(player_two);

	if (score_one > score_two)
	{
		printf("Player 1 wins!\n");
	}
	else if (score_one < score_two)
	{
		printf("Player 2 wins!\n");
	}
	else
	{
		printf("Tie!\n");
	}
}

int compute_score(string word)
{
	int total = 0;
	for (int i = 0, len = strlen(word); i < len; i++)
	{
		int idx_lower = word[i] - 'a';
		int idx_upper = word[i] - 'A';
		if (isupper(word[i]))
		{
			total += POINTS[idx_upper];
		}
		else if (islower(word[i]))
		{
			total += POINTS[idx_lower];
		}
	}
	return total;
}