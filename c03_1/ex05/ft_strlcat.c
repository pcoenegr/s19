char	*ft_strlcat(char *dest, char *src, int size)
{
		int	i;
		int	l;

		i = 0;
		l = 0;
		while (dest[l])
				l++;
		while (src[i] && (l < (size - 1)))
		{
				dest[l] = src[i];
				l++;
				i++;
		}
		dest[l] = '\0';
		return (l);
}
