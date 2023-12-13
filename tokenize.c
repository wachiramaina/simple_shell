#include "main.h"

/**
 * tokenize - tokenizes a string even the continuous delim
 * @s: user's command typed into shell
 * @del: delimeter
 * Return: an array of tokens
 */

char **tokenize(char *s, char *del)
{
	int buff = 0, p = 0, si = 0, i = 0, len = 0, se = 0;
	char **tokens = NULL, d_ch;

	d_ch = del[0];
	buff = del_size(s, d_ch);
	tokens = malloc(sizeof(char *) * (buff + 2));
	if (tokens == NULL)
		return (NULL);

	while (s[se] != '\0')
		se++;
	while (si < se)
	{
		len = tkn_len(s, si, d_ch);
		tokens[p] = malloc(sizeof(char) * (len + 1));
		if (tokens[p] == NULL)
			return (NULL);
		i = 0;

		while ((s[si] != d_ch) && (s[si] != '\0'))
		{
			tokens[p][i] = s[si];
			p++;
			si++;
		}
		tokens[p][i] = '\0';
		p++;
		si++;
	}
	tokens[p] = NULL;
	return (tokens);
}
