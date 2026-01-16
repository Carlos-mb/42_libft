/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:13:46 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/16 09:11:39 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_create(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	content = f(lst->content);
	new_node = ft_lstnew(content);
	if (!new_node)
		del(content);
	return (new_node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*output;
	t_list	*tmp;
	void	*content;

	new_node = ft_create(lst, f, del);
	if (!new_node)
		return (NULL);
	output = new_node;
	while (lst->next)
	{
		lst = lst->next;
		content = f(lst->content);
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			del(content);
			ft_lstclear(&output, del);
			return (NULL);
		}
		new_node->next = tmp;
		new_node = new_node->next;
	}
	return (output);
}
