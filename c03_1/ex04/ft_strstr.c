#include <string.h>

char	*ft_strstr(char *str,char *to_find)
{
	char	*a;
	char	*b;

	b = to_find;
	if(*b == '\0')
		return(str);
	while(*str)
	{
		if(*str == *b)
		{
			a = str;
			while(*a == *b|| *b == '\0')
			{
				if(*b =='\0')
					return(str);
				a++;
				b++;
			}
			b = to_find;
		}
		str++;
	}
	return(0);
}
