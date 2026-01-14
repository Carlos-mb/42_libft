/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:14:22 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/12 15:15:38 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*sc1;
	const unsigned char	*sc2;

	if (n == 0)
		return (0);
	sc1 = (const unsigned char *) s1;
	sc2 = (const unsigned char *) s2;
	while (n > 1 && *sc1 == *sc2)
	{
		sc1++;
		sc2++;
		n--;
	}
	return (*sc1 - *sc2);
}
