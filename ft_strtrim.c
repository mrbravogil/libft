
#include "libft.h"

static int	in_set(char c, const char *set);

static int	in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	end;
	size_t	start;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && in_set(s1[start], set))
		start++;
	while (end > start && in_set(s1[end -1], set))
		end--;
	s2 = (char *)malloc((end - start + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1 + start, end - start);
	s2[end - start] = '\0';
	return (s2);
}

/*#include <stdio.h>
int	main()
{
	printf("%s\n", ft_strtrim("xyxyHola!yxxx", "xy"));
	return (0);
}*/
