/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:59:48 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/20 13:36:52 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (d == 0 && s == 0)
		return (0);
	if (dst <= src && len > 0)
	{
		ft_memcpy(d, s, len);
	}
	else
	{
		while (len > 0)
		{
			d[len - 1] = s[len - 1];
			len--;
		}
	}
	return (dst);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char destino[] = "solana";
	char copiar[] = "patat";
	printf("%s\n", ft_memmove(destino, copiar, 5));
	printf("%s", memmove(destino, copiar, 5));
	return (0);
}*/
