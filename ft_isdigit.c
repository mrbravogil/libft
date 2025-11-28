/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 13:51:16 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/10 13:51:22 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*int main()
{
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('B'));
	printf("%d\n", ft_isdigit('1'));
	return (0);
}*/