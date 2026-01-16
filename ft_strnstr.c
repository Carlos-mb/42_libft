/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:23:57 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/16 12:36:55 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*big2;
	size_t	len_little;

	big2 = (char *) big;
	if (*little == '\0')
		return (big2);
	len_little = ft_strlen(little);
	i = 0;
	while (len && big2[i] != '\0' && i < len - len_little + 1)
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
/*
int	main(void)
{
//	ft_strnstr(((void*)0), "fake", 2);
	ft_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
}
*/