
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		((unsigned char *)ptr)[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

/*int main(void)
{
	char buf1[32] = "Hello, World!";
	char buf2[32] = "Hello, World!";

	printf("Antes: buf1=\"%s\", buf2=\"%s\"\n", buf1, buf2);

	ft_memset(buf1 + 7, 'X', 5);
	memset(buf2 + 7, 'X', 5);

	printf("Después:  buf1=\"%s\", buf2=\"%s\"\n", buf1, buf2);

	return (0);
}*/