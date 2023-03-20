/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:43:22 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/20 16:33:57 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (s1[i] != 0 || s2[i] != 0) && (i < (n - 1)))
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char arr[] = "134";
	char arr2[] = "135";

	printf("%d\n", ft_strncmp(arr, arr2, 3));
	printf("%d", strncmp(arr, arr2, 3));
	return (0);
}*/
