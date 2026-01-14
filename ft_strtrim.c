/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:24:07 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/12 15:16:13 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*new;
	size_t	from;
	size_t	to;
	size_t	len;

	len = ft_strlen(s1);
	from = 0;
	to = len;
	if (len > 0)
	{
		while (s1[from] && ft_strchr (set, s1[from]) != NULL)
			from++;
		if (from < len)
			while (to > 0 && ft_strchr (set, s1[to - 1]) != NULL)
				to--;
	}
	new = (char *)malloc (to - from + 1);
	if (new)
		ft_strlcpy(new, &s1[from], to - from + 1);
	return (new);
}
