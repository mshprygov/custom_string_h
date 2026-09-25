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

	printf("Enter a string: ");
	fgets(string_1,sizeof(string_1),stdin);
	clear_newline(string_1);

	/* Strlen() */

	printf("Your string is: %s\n",string_1);
	printf("It's length is %zu\n",strlen(string_1));

	return 0;
}
