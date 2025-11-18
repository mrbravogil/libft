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
#include <stdio.h>

char	*loop_trim(char const *s1, char *s2, char const *set, size_t len);

char	*loop_trim(char const *s1, char *s2, char const *set, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
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
	s2[len] = '\0';
	return (s2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1);
	s2 = (char *)malloc(len + 1 * sizeof(char));
	if (!s1 || !s2)
		return (NULL);
	loop_trim(s1, s2, set, len);
	return (s2);
}

/*int	main()
{
	printf("%s\n", ft_strtrim("   hola   ", "   "));
	return (0);
}*/
