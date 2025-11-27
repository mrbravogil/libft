/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:38:31 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/11 15:38:32 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	make_copy(unsigned char *dst, const unsigned char *src, size_t n)
{
	size_t	i;

	if (src < dst)
	{
		i = n;
		while (i > 0)
		{
			i--;
			dst[i] = src[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			dst[i] = src[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*cdst;
	const unsigned char	*csrc;
	size_t				i;

	i = 0;
	cdst = (unsigned char *)dest;
	csrc = (const unsigned char *) src;
	if (!dest && !src)
		return (0);
	make_copy(cdst, csrc, n);
	return (dest);
}
