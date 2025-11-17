/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:44:16 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/11 16:44:19 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		d;
	const unsigned char	*cs;

	d = (unsigned char) c;
	cs = (const unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (cs[i] == d)
			return ((void *)s);
		i++;
	}
	return (0);
}
