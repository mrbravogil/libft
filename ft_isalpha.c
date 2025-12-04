
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*int main()
{
	printf("%d\n", ft_isalpha('a'));
	printf("%d\n", ft_isalpha('B'));
	printf("%d\n", ft_isalpha('1'));
	return (0);
}*/
