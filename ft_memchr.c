/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 16:44:16 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/11 16:44:19 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	d;

	d = (unsigned char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == d)
			return (s[i]);
		i++;
	}
	return (0);
}
