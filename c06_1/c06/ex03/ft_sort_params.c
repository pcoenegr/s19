/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 09:30:05 by pcoenegr          #+#    #+#             */
/*   Updated: 2021/03/22 09:35:28 by pcoenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_sortby_ascii(int nb, char **value)
{
	int		z;
	int		y;
	char	*t;

	z = 0;
	while (z < (nb - 1))
	{
		y = 0;
		while (value[z][y] == value[z + 1][y])
			y++;
		if (value[z][y] > value[z + 1][y])
		{
			t = value[z];
			value[z] = value[z + 1];
			value[z + 1] = t;
			z = 0;
		}
		z++;
	}
}

int		main(int argc, char *argv[])
{
	int x;

	x = 1;
	while (argc >= (x + 1))
	{
		ft_sortby_ascii(argc, argv);
		ft_putstr(argv[x]);
		ft_putchar('\n');
		x++;
	}
	return (0);
}
