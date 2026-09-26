/*
	Main program logic shared among both standard and custom main files.
	Everything must lead to equivalent results both using
	standard and custom string.h headers.
*/

#include <stdio.h>

#include "functions.h"
#include "globals.h"

#ifndef CUSTOM_LIB
	#include <string.h>
#else
	#include "my_string.h"
	#include "my_string_names.h"
#endif

int main()
{
	/* Prompt user for the strings */

	printf("\n# <string.h> - Custom functions implementation\n\n");

	prompt_user("Enter a string");

	if (fgets(string_1,sizeof(string_1),stdin) == NULL)
	{
		prompt_error("Wrong input");
	}

	if (string_1[strlen(string_1) - 1] == '\n')
	{
		clear_string(string_1);
	}
	else
	{
		clear_buffer();
	}

	/* Strlen() */

	printf("\n# strlen() - Calculate string length\n\n");

	printf("Your string is: %s\n",string_1);
	printf("It's length is %zu characters.\n",strlen(string_1));

	/* Strcat() */

	printf("\n# strcat() - Concatenate two strings\n\n");

	prompt_user("Enter a second string");

	if (fgets(string_2,sizeof(string_2),stdin) == NULL)
	{
		prompt_error("Wrong error");
	}

	if (string_2[strlen(string_2) - 1] == '\n')
	{
		clear_string(string_2);
	}
	else
	{
		clear_buffer();
	}

	if (can_concatenate(string_1,string_2))
	{
		printf("Two strings together: %s\n",
		strcat(string_1,string_2));
	}
	else
	{
		prompt_error("Buffer too low");
	}

	/* End of program */

	return 0;
}
