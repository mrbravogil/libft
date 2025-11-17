/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:21:03 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/13 15:21:06 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*loop_join(char const *s1, char const *s2, char *s3, int total)
{
	int	i;

	i = 0;
	while (i < total)
	{
		while (s1[i])
		{
			s3[i] = s1[i];
			i++;
		}
		while (s2)
		{
			s3[i] = s2[i];
			i++;
		}
	}
	s3[i] = '\0';
	return (s3);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	i;
	size_t	len;
	size_t	len2;
	size_t	total;

	len = ft_strlen(s1);
	len2 = ft_strlen (s2);
	if (!s1 || !s2)
		return (NULL);
	total = len + len2 + 1;
	s3 = (char *)malloc((total) * sizeof(char));
	i = 0;
	loop_join(s1, s2, s3, total);
	return (s3);
}
