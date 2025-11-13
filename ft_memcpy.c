/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:27:38 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/11 15:27:40 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*csrc;
	unsigned char		*cdst;
	size_t				i;

	i = 0;
	cdst = (unsigned char *) dst;
	csrc = (const unsigned char *) src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
