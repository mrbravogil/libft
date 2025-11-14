/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabravo- <mabravo-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:16:06 by mabravo-          #+#    #+#             */
/*   Updated: 2025/11/14 14:16:08 by mabravo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void ft_putchar(char c, int fd)
{
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
    long int i;

    i = n;
    if (i == 0)
        ft_putchar('0', fd);
    if (i < 0)
    {
        ft_putchar('-', fd);
        i *= -1;
    }
    if (i > 9)
    {
        ft_putnbr_fd(i % 10, fd);
        ft_putnbr_fd(i / 10, fd);
    }
    else
    {
        ft_putchar(i + '0', fd);
    }
}