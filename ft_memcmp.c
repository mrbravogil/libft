
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cs1;
	const unsigned char	*cs2;
	size_t				i;

	i = 0;
	cs1 = (const unsigned char *) s1;
	cs2 = (const unsigned char *) s2;
	while (i < n)
	{
		if (cs1[i] != cs2[i])
			return (cs1[i] - cs2[i]);
		i++;
	}
	return (0);
}

/*int main(void)
{
	char s1[32] = "Hello, World!";
	char s2[32] = "Hejjo, World!";

	int	i= ft_memcmp(s1, s2, 5);

	printf("%d\n", i);

	return (0);
}*/
