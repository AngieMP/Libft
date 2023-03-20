/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:18:54 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/15 11:29:57 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	a;
	char	*str;
	int		len;

	a = (char) c;
	str = (char *) s;
	len = ft_strlen(s);
	if (!s)
		return (0);
	while (str[len] != a && len > 0)
	{
		len--;
	}
	if (str[len] == a)
		return (str + len);
	return (0);
}

/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str;

	str = "hola";
	printf("%s\n", ft_strrchr(str, 0));
	printf("%s\n", strrchr(str, 0));
}*/
