/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:31:20 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/13 15:31:22 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	var_init(char const *s1, char *s2, size_t len, size_t i)
{
	len = ft_strlen(s1);
	s2 = (char *)malloc(len + 1 * sizeof(char));
	i = 0;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	len;
	size_t	i;
	size_t	j;

	var_init(s1, s2, len, i, j);
	if (!s1 || !s2)
		return (NULL);
	j = 0;
	while (i < len)
	{
		while (s1[i] == set[i])
			i++;
		while (s1[i] != set[i])
		{
			s2[j] = s1[i];
			i++;
			j++;
		}
	}
	s2[j] = '\0';
	return (s2);
}
