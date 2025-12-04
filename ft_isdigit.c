
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/*int main()
{
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('B'));
	printf("%d\n", ft_isdigit('1'));
	return (0);
}*/