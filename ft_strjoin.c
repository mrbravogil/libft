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
//#include <stdio.h>

char	*loop_join(char const *s1, char const *s2, char *s3);

char	*loop_join(char const *s1, char const *s2, char *s3)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		s3[j++] = s1[i++];
	}
	i = 0;
	while (s2[i])
	{
		s3[j++] = s2[i++];
	}
	s3[j] = '\0';
	return (s3);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len;
	size_t	len2;
	size_t	total;

	len = ft_strlen(s1);
	len2 = ft_strlen (s2);
	total = len + len2 + 1;
	s3 = (char *)malloc((total) * sizeof(char));
	if (!s3)
		return (0);
	loop_join(s1, s2, s3);
	return (s3);
}

/*int	main()
{
	printf("%s\n", ft_strjoin("hola   ", "que tal"));
	return (0);
}*/
