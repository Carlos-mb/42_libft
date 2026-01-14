/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:14:43 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/13 23:43:28 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	from;
	size_t	cont;
	int		dir;

	if (len == 0 || dst == src)
		return (dst);
	if (dst < src)
	{
		dir = 1;
		from = 0;
	}
	else
	{
		dir = -1;
		from = len - 1;
	}
	cont = 0;
	while (cont < len)
	{
		((unsigned char *)dst)[from] = ((unsigned char *)src)[from];
		from += dir;
		cont++;
	}
	return (dst);
}
