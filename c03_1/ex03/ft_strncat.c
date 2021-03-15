
char	*ft_strncat(char *dest, char *src, int nb)
{
		int	i;
		int	l;

		i = 0;
		l = 0;
		while (dest[l])
				l++;
		while (src [i] && i < nb)
		{
				dest[l] = src[i];
				l ++;
				i ++;
		}
		dest [l] = '\0';
		return (dest);
}
