/*
	My own implementation of the standard <String.h> functions.
	Names must follow my_[standard_name] pattern.
*/

#include <stdio.h>

#include "my_string.h"

size_t my_strlen(const char* string)
{
	int count = 0;

	while (string[count] != '\0' && string[count] != EOF)
	{
		count++;
	}

	return (size_t) count;
}
