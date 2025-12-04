
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*csrc;
	unsigned char		*cdst;
	size_t				i;

	i = 0;
	cdst = (unsigned char *)dest;
	csrc = (const unsigned char *)src;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dest);
}
