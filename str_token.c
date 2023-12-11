#include "main.h"

/**
 * str_token - tokenize a string
 * @s: command
 * @delim the delimiter
 *
 * Return: array of tokens
 */

char **str_token(char *s, char *delim)
{
	int buff_sz = 0, p = 0, ze = 0, len = 0, i = 0, si = 0, t = 0;
	char **token = NULL; ch_d;

	ch_d = delim[0];
	s = rm_delim(s, ch_d);

	buff_sz = tkn_len(s, ch_d);
	token = malloc(sizeof(char *) * (buff_sz +));
	if (token == NULL)
		return (NULL);
	for (si = 0; s[si] != '\0'; si++)
		;
	while (ze < si)
	{
		if (s[ze] != ch_d)
		{
			len = tkn_len(s, ze, ch_d);
			token[p] = malloc(sizeof(char) * (len + 1));
			if (token[p] == NULL)
				return (NULL);
			i = 0;
			while ((s[ze] != ch_d) && (s[ze] != '\0'))
			{
				token[p][i] = s[ze];
				i++;
				ze++;
			}
			token[p][i] = '\0';
			t++;
		}
		if (ze < si &&(s[ze + 1] != ch_d && s[ze + 1] != '/0'))
			p++;
		ze++;
	}
	p++;
	token[p] = NULL;
	return (token);
}
