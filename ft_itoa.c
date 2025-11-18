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

#include "libft.h"

static int	n_count(long n);
static char	*loop_itoa(char *dest, int len, long n);

static int	n_count(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*loop_itoa(char *dest, int len, long n)
{
	int	i;

	i = len;
	if (n == 0)
		dest[0] = '0';
	if (n < 0)
	{
		dest[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		i--;
		dest[i] = (n % 10) + '0';
		n /= 10;
	}
	dest[len] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;
	long	num;

	num = (long)n;
	len = n_count(num);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	return (loop_itoa(dest, len, num));
}

/*#include <stdio.h>
#include <limits.h>
int main(void)
{
    printf("INT_MIN: %s\n", ft_itoa(INT_MIN));
    printf("INT_MAX: %s\n", ft_itoa(INT_MAX));
    printf("0: %s\n", ft_itoa(0));
    printf("-42: %s\n", ft_itoa(-42));
    printf("12345: %s\n", ft_itoa(12345));
    return 0;
}*/
