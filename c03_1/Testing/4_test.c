
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void 	ft_putchar ( char c)
{
	write ( 1 , & c, 1 );
}

void 	ft_putstr(char *str)
{
	int 	i;

	i = 0 ;
	while (* (str + i))
		i ++;
	write ( 1 , str, i);
}

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

int main() 
{
   char str1[] = "Fuck this Code";
   char str2[] = "code";
   char* ptr;

   ptr = strstr(str1, str2);
   if (ptr) {
      printf("String is found\n");
      printf("The occurrence of string '%s' in '%s' is '%s'\n", str2, str1, ptr);
   }
   else
      printf("String not found\n");
   return 0;
}
