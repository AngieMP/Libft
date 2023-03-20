/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:59:33 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/20 17:53:30 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;
	char	*str;

	a = (char) c;
	str = (char *) s;
	while (*str != a && *str != '\0')
	{
		str++;
	}
	if (*str == a)
		return (str);
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str;
	
	str = "hola";
	printf("%s\n", ft_strchr("teste", 97));
	printf("%s\n", strchr("teste", 97));
}*/
