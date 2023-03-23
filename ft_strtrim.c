/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:11:54 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/22 14:14:29 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]) != 0)
	{
		i++;
	}
	while (i < len && s1[len - j - 1] != '\0'
		&& ft_strchr(set, s1[len - j - 1]) != 0)
	{
		j++;
	}
	return (ft_substr(s1, (unsigned int)i, (size_t)(len - i - j)));
}

/*#include <stdio.h>
int	main(void)
{
	char	*s1 = "  \t \t \n   \n\n\n\t";
	char	*set = " \n \t";
	printf("%s",ft_strtrim(s1, set));
	return(0);
}*/
