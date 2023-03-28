/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 12:36:29 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/28 13:54:09 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	while (*lst)
	{
		t_list	*aux;

		aux = *lst;
		(*lst) = aux -> next;
		if (del)
			del(aux -> content);
		free(aux);
	}
}
