
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

/*int main()
{
	printf("%c\n", ft_toupper('z'));
	return (0);
}*/