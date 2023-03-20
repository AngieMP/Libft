/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:16:55 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/15 11:38:45 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, int len)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) b;
	while (i < len)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

/*#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char	*str;
	str = (void*) malloc(20 * sizeof(char));
	printf("%s", ft_memset(str, 10, 5));
	return (0);
}*/
