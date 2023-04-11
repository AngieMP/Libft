/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:06:31 by angmedin          #+#    #+#             */
/*   Updated: 2023/04/11 14:25:52 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{	
	t_list	*new;
	t_list	*ptr;

	if (!lst || !f || !del)
		return (NULL);
	ptr = NULL;
	while (lst)
	{
		new = ft_lstnew(lst -> content);
		if (new == NULL)
		{
			ft_lstclear(&ptr, del);
			return (NULL);
		}
		new -> content = f(new -> content);
		ft_lstadd_back(&ptr, new);
		lst = lst -> next;
	}
	return (ptr);
}
