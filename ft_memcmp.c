/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:24:02 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/20 16:44:16 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (n <= 0)
		return (0);
	while (str1[i] == str2[i] && (i < (n - 1)))
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char arr[] = "134";
	char arr2[] = "135";

	printf("%d\n", ft_memcmp(arr, arr2, 4));
	printf("%d", memcmp(arr, arr2, 4));
	return (0);
}*/
