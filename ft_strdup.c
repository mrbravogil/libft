
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		len;
	int			i;
	char		*s2;

	len = ft_strlen(s);
	s2 = (char *)malloc((len + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
