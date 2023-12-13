/**
 * tkn_size - returnsZZ number of delim ignoring continuous delim
 * @str: user's command typed into shell
 * @delm: delimeter (e.g. " ");
 * Return: number of delims so that (num token = delims + 1)
 */
int t_size(char *str, char delm)
{
	int i = 0, num_delm = 0;

	while (str[i] != '\0')
	{
		if ((str[i] == delm) && (str[i + 1] != delm))
		{
			/* handle continuous delims */
			num_delm++;
		}
		if ((str[i] == delm) && (str[i + 1] == '\0'))
		{
			/*handle continuous delims after full command */
			num_delm--;
		}
		i++;
	}
	return (num_delm);
}
