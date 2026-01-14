/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:38:34 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/12 15:15:06 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(long n)
{
	int	size;

	size = 1;
	while (n > 9)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*output;
	int		size;
	long	ln;
	int		is_negative;

	ln = (long)n;
	size = 0;
	is_negative = 0;
	if (ln < 0)
		size = ++is_negative;
	ln = ln * (1 - (2 * is_negative));
	size += ft_digits(ln);
	output = malloc (sizeof(char) * (size + 1));
	if (output == NULL)
		return (NULL);
	if (is_negative)
		output[0] = '-';
	output[size] = '\0';
	while (--size - is_negative >= 0)
	{
		output[size] = '0' + (ln % 10);
		ln = ln / 10;
	}
	return (output);
}

/*
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int	main(void)
{
	char	*str;

	str = ft_itoa(0);
	printf("0             -> %s\n", str);
	free(str);

	str = ft_itoa(42);
	printf("42            -> %s\n", str);
	free(str);

	str = ft_itoa(-42);
	printf("-42           -> %s\n", str);
	free(str);

	str = ft_itoa(2147483647);
	printf("INT_MAX       -> %s\n", str);
	free(str);

	str = ft_itoa(-2147483648);
	printf("INT_MIN       -> %s\n", str);
	free(str);

	str = ft_itoa(1);
	printf("1             -> %s\n", str);
	free(str);

	str = ft_itoa(-1);
	printf("-1            -> %s\n", str);
	free(str);

	return (0);
}
	*/