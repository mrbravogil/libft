
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		d;
	unsigned char		*cs;

	d = (unsigned char) c;
	cs = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (cs[i] == d)
			return ((void *)&cs[i]);
		i++;
	}
	return (0);
}
/*int main(void)
{
	char buf1[32] = "Hello, World!";

	printf("Antes: %s\n", buf1);

	void *a = ft_memchr(buf1, 'o', 5);
	char *b = (char *)a;

	printf("Después:  %s\n", b);

	return (0);
}*/