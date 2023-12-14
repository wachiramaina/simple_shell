#include "main.h"

/**
 * couldnt_cd - prints the error message "can't cd to dir"
 * @s: argument after cd cmd
 * @n: command
 * @env: shell name
 *
 * Return: shell name
 */

void couldnt_cd(char *s, int n, lists *env)
{
	int i;
	char *str, *sh;

	sh = get_environ("_", env);
	for (i = 0; sh[i] != '\0'; i++)
		;
	write(STDOUT_FILENO, sh, i);
	free(sh);
	write(STDOUT_FILENO, ": ", 2);
	str = ito_str(n);

	for (i = 0; str[i] != '\0'; i++)
		;
	write(STDOUT_FILENO, str, i);
	free(str);
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, "cd: can't cd to ", 16);

	for (i = 0; s[i] != '\0'; i++)
		;
	write(STDOUT_FILENO, s, i);
	write(STDOUT_FILENO, "\n", 1);
}
