/*
	Main program logic shared among both standard and custom main files.
	Everything must lead to equivalent results both using
	standard and custom string.h headers.
*/

#include <stdio.h>

#include "main_logic.h"
#include "globals.h"

void main_logic()
{
	/* Prompt user for the strings */

	printf("Enter a string: ");
	fgets(string_1,sizeof(string_1),stdin);
	clear_newline(string_1);
	printf("Your string is: %s\n",string_1);
}
void clear_newline(char *string)
{
	int c = 0;
	while (string[c] != '\0' && string[c] != EOF)
	{
		if (string[c] == '\n')
		{
			string[c] = '\0';
			break;
		}

		c++;
	}
}
