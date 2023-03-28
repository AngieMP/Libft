/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 11:53:32 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/24 12:20:36 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!str)
		return (0);
	while (s[i])
	{
		str[i] = f((unsigned int) i, (char)(s[i]));
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>

char	ft_transform(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c + 1);
	else
		return (c - 1);
}

int main(void)
{
    char *s = "Hello, world!";
    char *result = ft_strmapi(s, ft_transform);
    printf("%s\n", result);
    free(result);
    return (0);
}*/
