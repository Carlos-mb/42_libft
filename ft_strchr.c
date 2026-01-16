/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:21:45 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/16 09:01:19 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c2;

	c2 = (unsigned char)c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == c2)
			return ((char *) s);
		else
			s++;
	}
	if ((unsigned char)*s == c2)
		return ((char *) s);
	return (NULL);
}
