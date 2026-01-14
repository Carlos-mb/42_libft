/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:22:13 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/12 15:16:03 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(src);
	d_len = 0;
	while (dst[d_len] != '\0' && d_len < size)
		d_len++;
	if (d_len == size)
		return (size + s_len);
	i = 0;
	while (src[i] != '\0' && (d_len + i + 1) < size)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <unistd.h> 
#include <bsd/string.h> 


int main (void)
{
	char *src = " Mundo";
	char dst1[20];
	char dst2[20];
	size_t ret1, ret2;

	strcpy(dst1, "Hola"); 
	strcpy(dst2, "Hola"); 
	ret1 = ft_strlcat(dst1, src, 0); // ret debería ser len_dst + len_src
	ret2 = strlcat(dst2, src, 0);
	printf("%ld - %ld\n", ret1, ret2);
	return (0);
}*/