/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angmedin <angmedin@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 13:15:56 by angmedin          #+#    #+#             */
/*   Updated: 2023/04/13 13:25:02 by angmedin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	i++;
	return (i);
}

char	*ft_cutitoa(long n, char *str, int len)
{
	str[len] = '\0';
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (n > 9)
	{
		str[len - 1] = (n % 10) + '0';
		len--;
		n = n / 10;
	}
	str[len - 1] = n + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nbr;

	nbr = (long) n;
	len = ft_intlen(nbr);
	str = (char *) malloc((len + 1) * sizeof(char));
	if (!str)
		return (0);
	return (ft_cutitoa(nbr, str, len));
}
/*#include <stdio.h>
int	main(void)
{
	printf("%s", ft_itoa(-2147483648));
	return(0);
}*/
