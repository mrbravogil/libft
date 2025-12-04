
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int main()
{
	printf("%d\n", ft_isascii(10));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii(95));
	printf("%d\n", ft_isascii(140));
	return (0);
}*/