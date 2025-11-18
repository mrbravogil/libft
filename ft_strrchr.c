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

char	*ft_strrchr(const char *s, int c)
{
	const char			*cs;
	unsigned char		d;
	size_t				i;

	d = (unsigned char) c;
	i = ft_strlen(cs);
	cs = (char *) s;
	if (d == '\0')
		return ((char *)i);
	if (d != '\0')
	{
		while (cs[i])
		{
			if (cs[i] == d)
				return ((char *)&cs[i]);
			i--;
		}
	}
	return (0);
}
