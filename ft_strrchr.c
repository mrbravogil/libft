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
	char				*cs;
	unsigned char		d;
	unsigned int		i;

	d = (unsigned char) c;
	cs = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == d)
			cs = ((char *)&s[i]);
		i++;
	}
	i = ft_strlen(s);
	if (s[i] == d)
		cs = ((char *)&s[i]);
	return (cs);
}
