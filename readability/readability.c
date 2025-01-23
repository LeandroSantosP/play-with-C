#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int get_total_words(string text);
int get_total_letters(string text);
int get_total_sentences(string text);

int main(void)
{
	string text = get_string("TEXT: ");
	int total_words = get_total_words(text);
	int total_letters = get_total_letters(text);
	int total_sentences = get_total_sentences(text);

	double L = ((double)total_letters / total_words) * 100;
	double S = ((double)total_sentences / total_words) * 100;

	double index = round(0.0588 * L - 0.296 * S - 15.8); // Use round() for proper rounding to nearest integer

	if (index >= 16)
	{
		printf("Grade 16+\n");
	}
	else if (index < 1)
	{
		printf("Before Grade 1\n");
	}
	else
	{
		printf("Grade %d\n", (int)index); // Use %d for integers
	}
}

int get_total_sentences(string text)
{
	int total = 0;
	for (int i = 0, len = strlen(text); i < len; i++)
	{
		if (text[i] == '.' || text[i] == '!' || text[i] == '?')
		{
			total += 1;
		}
	}
	return total;
}

int get_total_words(string text)
{
	int total = 0;
	for (int i = 0, len = strlen(text); i < len; i++)
	{
		if (text[i] != ' ' && (i == len - 1 || text[i + 1] == ' '))
		{
			total += 1;
		}
	}
	return total;
}

int get_total_letters(string text)
{
	int total = 0;
	for (int i = 0, len = strlen(text); i < len; i++)
	{
		if (text[i] == ' ' || text[i] == '.' || text[i] == '!' || text[i] == '?')
		{
			continue;
		}
		total++;
	}
	return total;
}