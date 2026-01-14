/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:37:42 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/14 22:10:41 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Dependiendo de tu sistema operativo actual, el comportamiento de la
función calloc puede diferir de lo descrito en su página del manual.
Debes seguir la siguiente regla: Si nmemb o size es 0, entonces
calloc() debe devolver un puntero único que pueda pasarse con éxito a
free(). Malloc(0) returns NULL if error or a valid pointer */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*out;

	out = malloc(nmemb * size);
	if (out)
	{
		ft_bzero(out, size * nmemb);
	}
	return (out);
}
