int		ft_str_is_lowercse(char *str)
{
	int	i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (!( >= 'a' && c <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
