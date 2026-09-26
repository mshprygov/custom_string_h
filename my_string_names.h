/*
	Substitute the standard <string.h> function names
	With names of my custom functions
*/

#ifndef MY_STRING_NAMES_H
#define MY_STRING_NAMES_H

#define strlen(x) my_strlen(x)
#define strcat(x,y) my_strcat(x,y)

#endif
