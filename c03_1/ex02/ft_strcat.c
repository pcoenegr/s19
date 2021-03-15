char	*ft_strcat(char *dest, char *src)
{
		int	i;
		int	dest_size;

		i = 0;
		dest_size = 0;
		while (dest[dest_size])
				dest_size++;
		while (src [i])
		{
				dest[dest_size = src[i]];
				dest_size ++;
				i ++;
		}
		dest [dest_size] = '\0';
		return (dest);
}
