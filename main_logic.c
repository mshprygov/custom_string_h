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
	// get rid of \n stored before \0
	// avoid using strlen to achieve that
	printf("Your string is: %s\n",string_1);
}
