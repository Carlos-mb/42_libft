/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:21:11 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/12 15:15:50 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	ln;

	ln = (long)n;
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln = -ln;
	}
	if (ln > 9)
	{
		ft_putnbr_fd(ln / 10, fd);
	}
	ft_putchar_fd((ln % 10) + '0', fd);
}
