
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp_ptr;
	size_t	i;

	tmp_ptr = (char *)s;
	i = 0;
	while (n > i)
	{
		tmp_ptr[i] = '\0';
		i++;
	}
}

/*void	ft_bx(void *s, size_t n)
{
	char	*tmp_ptr;
	size_t	i;

	tmp_ptr = (char *)s;
	i = 0;
	while (n > 0)
	{
		tmp_ptr[i] = 'x';
		i++;
		n--;
	}
}

int	main(void)
{
	char s[] = "hola";
	char b[] = "hola";

	printf("Bzero:\n");
	printf("Antes: %s\n", s);
	ft_bzero(s+1, 2); 
	printf("Después: %s\n", s);
	printf("\nCambio a X:\n");
	printf("Antes: %s\n", b);
	ft_bx(b+1, 2); 
	printf("Después: %s\n", b);
	return (0);
}*/