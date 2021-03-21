#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write (1, &c ,1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
int			ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char		*ft_strcat(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	while (str1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		i++;
		j++;
	}
	str1[i] = '\0';
	return (str1);
}

int			ft_strcpy(int size, char **strs, char *sep)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	count += ft_strlen(sep) * (size - 1);
	return (count);
}

char		*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		count;
	char	*str;

	if (size < 0)
		return (0);
	if (size == 0)
		return ((char *)malloc(0));
	count = ft_strcpy(size, strs, sep);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (str == 0)
		return (0);
	str[0] = 0;
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

int      main ( int argc, char ** argv)
{
	char 	* str;

	if (argc> 2 )
	{
		str = ft_strjoin (argc - 1 , argv + 1 , " .:. " ); 


		ft_putstr (str); 
		ft_putchar ('\n');
		free (str);
	}
	return ( 0 );
}
