
#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*str;
	int	l;

	i = 0;
	l = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (l++));
	while (i < l)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
