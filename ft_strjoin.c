
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int	i;
	int	j;

	j = 0;
	if (!s1 || !s2)
		return (0);
	s3 = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!s3)
		return (0);
	while (*s1)
	{
		s3[j++] = *s1++;
	}
	while (*s2)
	{
		s3[j++] = *s2++;
	}
	s3[j] = '\0';
	return (s3);
}

int	main()
{
	printf("%s\n", ft_strjoin("hola   ", "que tal"));
	return (0);
}
