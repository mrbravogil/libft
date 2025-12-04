
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = n;
	if (i < 0)
	{
		ft_putchar_fd('-', fd);
		i = -i;
	}
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putnbr_fd(i % 10, fd);
	}
	else
	{
		ft_putchar_fd(i + '0', fd);
	}
}

/*#include <limits.h>
int main(void)
{
    ft_putnbr_fd(INT_MAX, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(INT_MIN, 1);
    ft_putchar_fd('\n', 1);
    ft_putnbr_fd(0, 1);
    ft_putchar_fd('\n', 1);
    return 0;
}*/