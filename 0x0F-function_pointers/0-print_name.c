#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to print with
 *
 * Return: 0
 */
int  print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
	return(0);
}
