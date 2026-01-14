/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:37:42 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/12 15:21:31 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;

	if (size == 0 || nmemb == 0)
	{
		size = 1;
		nmemb = 1;
	}
	out = malloc(nmemb * size);
	if (out)
	{
		ft_bzero(out, size * nmemb);
	}
	return (out);
}
