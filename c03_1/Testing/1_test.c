
#include <stdio.h>

int 	ft_strncmp(char *s1, char *s2, unsigned  int n)
{
	unsigned int	i;

	i = 0 ;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
			i ++;
	}
	return ( 0 );
}

int 	main(void)
{

	char str1[] = {"FUUUUUUUUUUUUCCCCCCCKKKKKK"};
	char str2[] = {"F1UUUUUUUUUUUUUCCCCCCCKKKKKKK"};
	int ret;

	ret = ft_strncmp(str1, str2, 5);
 	if(ret < 0)
      		printf("str1 is less than str2\n");
	else if(ret > 0)
		printf("str2 is less than str1\n");
	else
		printf("str1 is equal to str2\n");
}
