/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmelero- <cmelero-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 18:13:46 by cmelero-          #+#    #+#             */
/*   Updated: 2026/01/14 19:38:38 by cmelero-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Itera la lista ‘lst’ y aplica la función ‘f’ al
contenido de cada nodo. Crea una lista resultante
de aplicar sucesivamente la función ‘f’ a cada
nodo. La función ‘del’ se utiliza para eliminar
el contenido de un nodo si es necesario.*/

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
/*


#include <stdio.h>
#include <stdlib.h>

static void	*test_f(void *c)
{
	char	*c1;

	c1 = ft_strdup( (char *) c);
	c1[0] = 'X';
	return ((void *) c1);
}

int  main (void)
{
	t_list	*test;
	t_list	*test2;
	t_list	*test0;	
	char a[]= "hola";
	char b[]= "Adios";
	char c[]= "Caracola";

	test = ft_lstnew(a);
	test->next = ft_lstnew(b);
	(*((*test).next)).next = ft_lstnew(c);

	test0 = ft_lstmap(test, test_f, free);
	test2 = test0;

	while (test2)
	{
		printf("%s\n", (char*)(test2->content));
		test2 = test2->next;
	}
	ft_lstclear(&test0, free);
	ft_lstclear(&test, free);
}*/