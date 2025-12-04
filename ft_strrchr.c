
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char				*cs;
	unsigned char		d;
	unsigned int		i;

	d = (unsigned char) c;
	cs = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == d)
			cs = ((char *)&s[i]);
		i++;
	}
	i = ft_strlen(s);
	if (s[i] == d)
		cs = ((char *)&s[i]);
	return (cs);
}
