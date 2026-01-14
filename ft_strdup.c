/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:21:54 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/12 15:15:56 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*out;
	size_t	len;

	len = ft_strlen(s1);
	out = malloc(len + 1);
	if (out)
		ft_strlcpy(out, s1, len + 1);
	return (out);
}
