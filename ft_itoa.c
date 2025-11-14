/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:27:58 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/14 12:28:01 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	n_count(int n)
{
	long int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*dest;
	int		len;
	long int	num;

	num = n;
	len = n_count(n);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (0);
	dest[len] = '\0';
	if (num == 0)
	{
		dest[0] = '0';
	}
	if (num < 0)
	{
		dest[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		len--;
		dest[len] = (num % 10) + '0';
		num /= 10;
	}
	return (dest);
}

/*int main()
{
    printf("%s\n", ft_itoa(-42));
    return (0);
}*/
