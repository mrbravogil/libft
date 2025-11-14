/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 13:39:53 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/14 13:39:55 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    long int    len;
    char    *dest;

    len = ft_strlen(s);
    dest = (char *)malloc((len + 1) * sizeof(char));
    if (!dest)
        return (0);
    i = 0;
    while (i < len)
    {
        dest[i] = (*f)(i, s[i]);
        i++;
    }
    dest[i] = '\0';
    return (dest);
}