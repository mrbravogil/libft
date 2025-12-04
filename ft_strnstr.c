
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0' && (i + j) < len)
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}

/*int main()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;

    ptr = ft_strnstr(largestring, smallstring, 7);
    printf("%s\n", ptr);
    return (0);
} */