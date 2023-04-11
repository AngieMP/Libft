/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:22:40 by angmedin          #+#    #+#             */
/*   Updated: 2023/04/11 16:00:23 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;

	if ((ft_strlen(s) == 0) || ((int)start > (int)ft_strlen(s))
		|| (int)start == -1)
		str = (char *) malloc(sizeof(char));
	else if (((int)len > ((int)ft_strlen(s) - (int)start)) || (int)len == -1)
		str = (char *) malloc((ft_strlen(s) - (int)start + 1) * sizeof(char));
	else
		str = (char *) malloc((len + 1) * sizeof(char));
	i = (size_t) start;
	j = 0;
	if (!str)
		return (0);
	if ((size_t)start > ft_strlen(s))
		len = 0;
	while (j < len && s[i] != '\0')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_substr("hola", 4294967295, 18446744073709551615));
	return (0);
}*/
