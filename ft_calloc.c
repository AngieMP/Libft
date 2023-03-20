/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:50:38 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/20 17:27:16 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*call;
	size_t			i;

	call = (unsigned char *) malloc (count * size);
	i = 0;
	if (!call)
		return (0);
	while (i < count * size)
	{
		call[i] = 0;
		i++;
	}
	return (call);
}
