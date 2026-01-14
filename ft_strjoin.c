/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:22:03 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/12 15:16:01 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	char	*output;

	output = NULL;
	new = (char *)(malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (new)
	{
		output = new;
		while (*s1)
			*(new++) = *(s1++);
		while (*s2)
			*new++ = *s2++;
		*new = 0;
	}
	return (output);
}
