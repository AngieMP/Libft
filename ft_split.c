/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:30:29 by angmedin          #+#    #+#             */
/*   Updated: 2023/03/23 14:33:34 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_refill(char **matrix, const char *s, char c)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
			{
				matrix[j][k] = s[i];
				i++;
				k++;
			}
			matrix[j][k] = '\0';
			k = 0;
			j++;
		}
		else
			i++;
	}
	return (matrix);
}

char	**ft_alloc(char const *s, char c, char **matrix)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			j = 0;
			while (s[i] != c && s[i] != '\0')
			{
				i++;
				j++;
			}
			matrix[k] = (char *) ft_calloc((j + 1), sizeof(char));
			if (!matrix[k])
				return (0);
			k++;
		}
		else
			i++;
	}
	return (ft_refill(matrix, s, c));
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**matrix;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	matrix = (char **) ft_calloc((j + 1), sizeof(char *));
	if (!matrix)
		return (0);
	return (ft_alloc(s, c, matrix));
}

/*#include <stdio.h>

int main()
{
    char    a[] = "^^^1^^2a,^^^^3^^^^--h^^^^";
    char    b = '^';
    char    **ptr;
    int     i;
    i = 0;
    ptr = ft_split(a, b);
    while (ptr[i])
    {
        printf("%s\n", ptr[i]);
        i++;
    }
    free(ptr);
    return (0);
}*/
