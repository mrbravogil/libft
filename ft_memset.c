/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:19:33 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/11 15:19:37 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char *ptr;

	i = 0;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		s[i] = (unsigned char) c;
		i++;
	}
}
