
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	r = 1;
	s = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			r *= -1;
		if (nptr[i + 1] == '-' || nptr[i + 1] == '+')
			return (0);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		s = (s * 10) + (nptr[i] - '0');
		i++;
	}
	return (s * r);
}

/*int	main()
{
	printf("%d\n", ft_atoi("-+42"));
	return (0);
}*/