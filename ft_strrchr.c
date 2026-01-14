/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:24:02 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/12 15:16:11 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*found;
	unsigned char	c2;

	c2 = (unsigned char)c;
	found = NULL;
	while (*s != '\0')
	{
		if ((unsigned char)*s == c2)
			found = (char *) s;
		s++;
	}
	if (c2 == '\0' && (unsigned char)*s == '\0')
		return ((char *) s);
	return (found);
}
