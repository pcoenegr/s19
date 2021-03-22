/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 09:49:04 by pcoenegr          #+#    #+#             */
/*   Updated: 2021/03/22 09:50:41 by pcoenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_array(int *nb, int l)
{
	while (l-- > 0)
	{
		ft_putnbr(*nb + 1);
		ft_putchar(' ');
	}
}

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	x;

	x = 0;
	if (min >= max)
		return (-1);
	if ((arr = (int *)malloc(sizeof(int) * (max - min))) == ((void *)0))
		return (-1);
	while (min < max)
	{
		arr[x] = min;
		min++;
		x++;
	}
	*range = arr;
	return (x);
}
