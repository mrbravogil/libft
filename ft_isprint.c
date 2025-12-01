/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 14:04:07 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/10 14:04:09 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*int main()
{
	printf("%d\n", ft_isprint(127));
	printf("%d\n", ft_isprint(130));
	printf("%d\n", ft_isprint(33));
	return (0);
}*/