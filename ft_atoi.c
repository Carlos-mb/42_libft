/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 17:37:16 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/12 15:14:42 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;

	while (*nptr == ' ' || *nptr == '\f' || *nptr == '\n'
		|| *nptr == '\r' || *nptr == '\t' || *nptr == '\v')
		nptr++;
	sign = 1;
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	i = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		i = (i * 10) + (*nptr - '0');
		nptr++;
	}
	return (i * sign);
}
/*
int main (void)
{
	ft_atoi("1123123123123444141312313143435345");
	ft_atoi("-2147483648");
	return (0);
}*/