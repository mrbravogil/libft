/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:13:18 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/11 17:13:20 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	const unsigned char	cs;
	unsigned char		d;
	size_t				i;

	cs = (const unsigned char) s;
	d = (unsigned char) c;
	i = ft_strlen(cs);
	if (d == '\0')
		return (i);
	if (d != '\0')
	{
		while (cs[i])
		{
			if (cs[i] == d)
				return (cs[i]);
			i--;
		}
	}
	return (0);
}
