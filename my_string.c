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

char* my_strcat(char* destin, const char* source)
{
	int ptr_dst = 0;
	int ptr_src = 0;

	while (destin[ptr_dst] != '\0')
	{
		ptr_dst++;
	}

	while (source[ptr_src] != '\0')
	{
		destin[ptr_dst] = source[ptr_src];
		ptr_dst++;
		ptr_src++;
	}

	destin[ptr_dst] = '\0';

	return destin;
}
