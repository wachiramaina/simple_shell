#include "main.h"

/**
 * illegal_num - prints the error message "illegal num"
 * @s: argument after cmd
 * @n: the command
 * @env: shell name
 *
 * Return: void
 */
void illegal_num(char *s, int n, lists *env)
{
	int i;
	char *sh = NULL, *str = NULL;

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
	write(STDOUT_FILENO, "exit: Illegal number: ", 22);

	for (i = 0; s[i] != '\0'; i++)
		;
	write(STDOUT_FILENO, s, i);
	write(STDOUT_FILENO, "\n", 1);
}
