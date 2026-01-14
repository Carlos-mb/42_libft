/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:23:57 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/14 20:33:35 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*big2;

	big2 = (char *) big;
	if (*little == '\0')
		return (big2);
	if (ft_strlen(little) > len)
		return (NULL);
	i = 0;
	while (big2[i] != '\0' && i < len - ft_strlen(little) + 1)
	{
		j = 0;
		while (little[j] != '\0' && big2[j + i] != '\0'
			&& little[j] == big2[i + j])
		{
			j++;
			if (little[j] == '\0')
				return (&big2[i]);
		}
		i++;
	}
	return (NULL);
}
