#include "main.h"

/**
 * main - creates a simple shell
 * @ac: argument count
 * @av: argument vectors
 * @env: environment variables
 * Return: success(0)
 */

int main(int ac, char **av, char **env)
{
	(void)ac;
	(void)av;

	_promt(env);

	return (0);
}
