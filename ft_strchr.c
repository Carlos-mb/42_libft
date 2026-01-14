/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:21:45 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/12 15:15:54 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c2;

	c2 = (unsigned char)c;
	while (*s != '\0')
	{
		if ((unsigned char)*s == c2)
			return ((char *) s);
		else
			s++;
	}
	if ((unsigned char)*s == c2)
		return ((char *) s);
	return (NULL);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int main()
{
	char *c = strchr("Hola", 256);
	char *c2 = ft_strchr("Hola", 256);
  
	printf("---");
	printf("%i",c[0] );
	printf("\n");
	printf("%i",c2[0] );
	printf("\n");
	printf("---");	

  return 0;
}*/