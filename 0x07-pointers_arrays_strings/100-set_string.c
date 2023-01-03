#include "main.h"
#include <stdio.h>

/**
 * set_string - function that sets the value of a pointer to a chat
 * @s: double pointer to string
 * @to: pointer to string
 *
 * Retur: value
 */

void set_string(char **s, char *to)
{
	*s = to;
}
