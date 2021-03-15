#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int 	main(void)
{

	char str1[] = {"FUUUUUUUUUUUUCCCCCCCKKKKKK"};
	char str2[] = {"FUUUUUUUUUUUUCCCCCCCKKKKKKK"};
	int ret;

	ret = ft_strcmp(str1, str2);
 	if(ret < 0)
      		printf("str1 is less than str2\n");
	else if(ret > 0)
		printf("str2 is less than str1\n");
	else
		printf("str1 is equal to str2\n");
}
