
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	d;

	d = (unsigned char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == d)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == d)
		return ((char *)&s[i]);
	return (0);
}
