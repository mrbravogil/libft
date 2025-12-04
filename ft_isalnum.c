
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*int main()
{
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", ft_isalnum('B'));
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('\0'));
	return (0);
}*/