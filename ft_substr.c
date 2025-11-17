/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:29:20 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/13 14:29:23 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	size_t	i;
	char	*s2;

	i = 0;
	size = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > size)
		return (NULL);
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	s2 = malloc((size + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (i < len)
	{
		s2[i] = s[start + i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/*int main()
{
    char const *s = "Hola holita";
    char *s2 = ft_substr(s, 1, 11);
    printf("%s\n", s2);
    return (0);
}*/
