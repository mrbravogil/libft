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

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	count_words(char const *s, char c);
static void	ft_free(char **dest, int i);
static char	*fill_word(char const *s, char c);

static int	count_words(char const *s, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
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

static void	ft_free(char **dest, int i)
{
	while (i >= 0)
	{
		free(dest[i]);
		i--;
	}
	free(dest);
}

static char	*fill_word(char const *s, char c)
{
	char	*word;
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int	i;

	if (!s)
		return (NULL);
	dest = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			dest[i] = fill_word(s, c);
			if (!dest[i])
			{
				return (ft_free(dest, i - 1), NULL);
			}
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	dest[i] = NULL;
	return (dest);
}

/*int	main()
{
    char const *s = "hola que tal estas   ";
    char   **dest= ft_split(s, ' ');
    int i = 0;
    while(dest[i])
    {
        printf("%s\n", dest[i]);
        i++;
    }
    printf("s = \"%s\"\n", s);
    printf("count_words = %d\n", count_words(s, ' '));
    return(0);
}*/
