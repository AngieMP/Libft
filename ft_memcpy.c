/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:52:49 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/20 14:03:51 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (d == 0 && s == 0)
		return (0);
	while (i < n)
	{
			d[i] = s[i];
			i++;
	}
	return (d);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char destino[] = "sdfghjklñ";
	char copiar[] = "1";
	printf("%s\n", ft_memcpy(destino, copiar, 5));
	printf("%s", memcpy(destino, copiar, 5));
	return (0);
}*/
