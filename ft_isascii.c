/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:01:22 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/10 14:01:24 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main()
{
	printf("%d\n", ft_isascii(10));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii(95));
	printf("%d\n", ft_isascii(140));
	return (0);
}*/