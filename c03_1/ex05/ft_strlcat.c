/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcoenegr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:35:58 by pcoenegr          #+#    #+#             */
/*   Updated: 2021/03/16 10:36:36 by pcoenegr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlcat(char *dest, char *src, int size)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[l])
		l++;
	while (src[i] && (l < (size - 1)))
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (l);
}
