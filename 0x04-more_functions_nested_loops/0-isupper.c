/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */
int _isupper(char c)
{
	int verif;

	for (verif = 'A'; verif <= 'Z'; verif++)
	{
		if (c == verif)
			return (1);
		return (0);
	}
}

