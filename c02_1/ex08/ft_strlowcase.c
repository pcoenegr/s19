char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = ((str[i] - 'A') + 'a');
		i++;
	}
	return (str);
}
