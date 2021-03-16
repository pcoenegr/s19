/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 09:44:25 by pcoenegr          #+#    #+#             */
/*   Updated: 2021/03/16 09:45:39 by pcoenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_rev_int_tab(int *tab, int size)
{
	int		i;
	char	f;

	i = -1;
	while (++i < --size)
	{
		f = tab[i];
		tab[i] = tab[size];
		tab[size] = f;
	}
}
