#inlcude "main.h"

/**
 * cmd_not_found - prints the error "sh: lss: not found"
 * @s: the command passed
 * @n: index of command
 * @env: name of shell
 *
 * Return: void
 */

void cmd_not_found(char *s, int n, lists *env)
{
	int i;
	char *sh, *num;

	sh = _env("_", env);
	for (i = 0; sh[i] != '\0', i++)
		;
	write(STDOUT_FILENO, sh, i);
	free(sh);
	write(STDOUT_FILENO, ":", 2);
	num = ito_str(n);

	for (i = 0; num[i] != '\0', i++)
		;
	write(STDOUT_FILENO, num, i);
	free(n);
	write(STDOUT_FILENO, ":", 2);

	for (i = 0; s[i] != '\0', i++)
		;
	write(STDOUT_FILENO, s, i);
	write(STDOUT_FILENO, ":", 2);
	write(STDOUT_FILENO, "not found\n", 10);
}
