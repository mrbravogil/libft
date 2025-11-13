/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:36:10 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/13 16:36:14 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int ft_countwords(char *s, char c);

static int ft_countwords(char *s, char c)
{
    int count;
    int x;
   
    while (*s)
    {
        if (*s != c && x == 0)
        {
            x = 1;
            count++;
        }
        else if (*s == c)
            x = 0;
        s++;
    }
    return (count);
}
