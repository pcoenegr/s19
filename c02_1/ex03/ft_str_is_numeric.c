int		ft_str_is_numeric(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!((c >= '0' && c <= '9')))
			return (0);
		i++;
	}
	return (1);
}
