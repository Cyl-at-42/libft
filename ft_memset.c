#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char		*s2;
	unsigned long long	*s4;
	unsigned long long	*c_repeated8x;
	unsigned long long	count;

	s2 = (unsigned char *)s;
	if (n >= 15)
	{
		count = 8 + ((8 - ((unsigned long long)s2 & 7)) & 7);
		while (count--)
			*s2++ = (unsigned char)c;
		c_repeated8x = (unsigned long long *)s2;
		s4 = c_repeated8x--;
		n -= (s2 - (unsigned char *)s);
		count = n >> 3;
		while (count--)
			*s4++ = *c_repeated8x;
		n -= ((unsigned char *)s4 - s2);
		s2 = (unsigned char *)s4;
	}
	while (n--)
		*s2++ = (unsigned char)c;
	return (s);
}
