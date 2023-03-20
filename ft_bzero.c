/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 11:09:14 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/15 11:32:53 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str;
	str = (void*) malloc(20 * sizeof(char));
	ft_bzero(str, 6);
	printf("%s", str);
	return (0);
}*/
