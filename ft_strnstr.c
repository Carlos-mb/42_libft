/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:23:57 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/12 15:16:10 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h2;

	h2 = (char *) big;
	if (*little == '\0')
		return (h2);
	if (ft_strlen(little) > len)
		return (NULL);
	i = 0;
	while (big[i] != '\0' && i < len - ft_strlen(little) + 1)
	{
		j = 0;
		while (little[j] != '\0' && big[j + i] != '\0'
			&& little[j] == big[i + j])
		{
			j++;
			if (little[j] == '\0')
				return (&h2[i]);
		}
		i++;
	}
	return (NULL);
}
