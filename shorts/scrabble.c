#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int compute_score(string word);
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void)
{
	// Prompt the user for two words
	string word_py_one = get_string("Player 1: ");
	string word_py_two = get_string("Player 2: ");

	// Compute the score of each word
	int py_sc_one = compute_score(word_py_one);
	int py_sc_two = compute_score(word_py_two);
	// Print the winner
	if (py_sc_one > py_sc_two)
	{
		printf("Player 1 Wins!");
	}
	else if (py_sc_one < py_sc_two)
	{
		printf("Player 2 Wins!");
	}
	else
	{
		printf("Tie!");
	}
	printf("\n");
}

int compute_score(string word)
{
	int total = 0;
	for (int i = 0, length = strlen(word); i < length; i++)
	{
		char curr_letter = word[i];
		if ((curr_letter <= 'a' && curr_letter >= 'z') || (curr_letter <= 'A' && curr_letter >= 'Z'))
		{
			continue;
		}
		/* Letter 'a' is 97 so (97 - 97) is equal 0 so therefore index 0 */
		/* Letter 'b' is 98 so (98 - 97) is equal 1 so therefore index 1 */
		/* and so forth... */
		printf("%i\n", curr_letter);
		int idx_lowwe_case = curr_letter - 'a';
		int idx_upper_case = curr_letter - 'A';
		if (islower(curr_letter))
		{
			total += POINTS[idx_lowwe_case];
		}
		else if (isupper(curr_letter))
		{
			total += POINTS[idx_upper_case];
		}
	}
	return total;
}