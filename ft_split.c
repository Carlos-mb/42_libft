/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:21:30 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/16 09:14:58 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_all(char *mys, char **output)
{
	int	i;

	if (mys)
		free(mys);
	i = 0;
	if (output)
	{
		while (output[i])
		{
			free(output[i]);
			i++;
		}
		free(output);
	}
}

static int	ft_cleaninput(const char *str, char **str2, char c)
{
	int	i;
	int	j;

	if (!str)
		return (0);
	*str2 = ft_strdup(str);
	if (*str2 == NULL)
		return (0);
	j = 0;
	while (str[j] && str[j] == c)
		j++;
	i = 0;
	while (str[j])
	{
		(*str2)[i++] = str[j];
		j++;
		while ((str[j] == c) && (str[j + 1] == c || str[j + 1] == '\0'))
			j++;
	}
	(*str2)[i] = '\0';
	return (1);
}

static int	ft_fill_output(char ***output, char *mys, char c)
{
	int	i;
	int	word_count;

	word_count = !(mys[0] == '\0');
	i = 0;
	while (mys[i] != '\0')
		if (mys[i++] == c)
			word_count++;
	*output = ft_calloc(word_count + 1, sizeof(char *));
	if (!(*output))
	{
		free(mys);
		return (0);
	}
	return (1);
}

static int	ft_malloc(size_t j, char *mys, char **output, size_t cw)
{
	output[cw] = malloc (j + 1);
	if (!output[cw])
	{
		ft_free_all (mys, output);
		return (0);
	}
	output[cw][j] = '\0';
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	*mys;
	size_t	i;
	char	**output;
	size_t	j;
	size_t	current_word;

	if (!ft_cleaninput(s, &mys, c) || !ft_fill_output(&output, mys, c))
		return (NULL);
	i = 0;
	current_word = 0;
	while (mys[i] != '\0')
	{
		j = 0;
		while (mys[i + j] != '\0' && mys[i + j] != c)
			j++;
		if (!ft_malloc(j, mys, output, current_word))
			return (NULL);
		j = 0;
		while (mys[i] != '\0' && mys[i] != c)
			output[current_word][j++] = mys[i++];
		current_word ++;
		i = i + (mys[i] != '\0');
	}
	free(mys);
	return (output);
}
