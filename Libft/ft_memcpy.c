#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	i = 0;
	while (dst != NULL || src != NULL)
	{
		while (i != n)
		{
			s1[i] = s2[i];
			i++;
		}
		return (dst);
	}
	return (NULL);
}
