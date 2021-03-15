int		ft_str_is_printable(char *str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 32 && c <= 126))
			return (0);
		i++;
	}
	return (1);
}
