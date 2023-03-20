/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:11:54 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/20 17:44:23 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0' || s1[i] == set[j])
	{
		while (s1[i] == set[j])
			j++;
		i++;
	}
	/*while (s1[i] == set[i])
	{
		i++;
		j++;
	}*/
	str = (char *) malloc(j * sizeof(char));
	i = i - j;
	while (i < (i + j))
	{
		str[k] = s1[i];
		i++;
		k++;
	}
	return (str);
}

/*int	main(void)
{
	s1 = lololalalolo;
	set = lala;
	printf("%s", ft_strstrim(
}*/
