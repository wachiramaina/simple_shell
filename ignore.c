#include "main.h"

/**
 * ignore_wht_space - ignores white spaces
 * @s: env vars
 *
 * Retrun: new str
 */

char *ignore_wht_space(char *s)
{
	for (; *s == ' ' || *s == '\n'; s++)

		return(s);
}
