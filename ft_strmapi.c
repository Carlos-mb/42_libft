/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:23:43 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/12 15:16:07 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*output;
	size_t		len;
	size_t		i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	output = malloc(len + 1);
	if (!output)
		return (NULL);
	output[len] = '\0';
	i = 0;
	while (i < len)
	{
		output[i] = f (i, s[i]);
		i++;
	}
	return (output);
}
