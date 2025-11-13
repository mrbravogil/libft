/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:54:41 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/11 16:54:44 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cs1;
	const unsigned char	*cs2;
	size_t				i;

	i = 0;
	cs1 = (const unsigned char *) s1;
	cs2 = (const unsigned char *) s2;
	while (i < n && (cs1[i] || cs2[i]))
	{
		if (cs1[i] != cs2[i])
			return ((const unsigned char)cs1[i] - (const unsigned char)cs2[i]);
		i++;
	}
	return (0);
}
