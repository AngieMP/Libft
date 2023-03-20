/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:24:58 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/15 12:07:40 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{	
		while (haystack[i] == needle[j] && i < len)
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i - j);
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (0);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	arr1[] = "holadiholajiiadiospepiji";
	const char	arr2[] = "";
	printf("%s\n", strnstr(arr1, arr2, 25));
	printf("%s", ft_strnstr(arr1, arr2, 25));

	return(0);
}*/
