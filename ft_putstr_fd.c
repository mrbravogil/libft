
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*int main()
{
	char str[] = "Hola holita";
	ft_putstr_fd(str, 1);
	return (0);
}*/