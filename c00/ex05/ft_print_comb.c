/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 08:59:05 by pcoenegr          #+#    #+#             */
/*   Updated: 2021/03/16 09:03:46 by pcoenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		g_nmbr[3];

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_tabs(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	g_nmbr[0] = '0';
	while (g_nmbr[0] <= '9')
	{
		if ((g_nmbr[0] < g_nmbr[1]) && (g_nmbr[1] < g_nmbr[2]))
		{
			ft_putchar(g_nmbr[0]);
			ft_putchar(g_nmbr[1]);
			ft_putchar(g_nmbr[2]);
			if (g_nmbr[0] != '7')
			{
				ft_tabs();
			}
		}
		if (g_nmbr[2]++ >= '9')
		{
			g_nmbr[2] = '0';
			g_nmbr[1]++;
		}
		if (g_nmbr[1] == '9')
		{
			g_nmbr[1] = '0';
			g_nmbr[0]++;
		}
	}
}
