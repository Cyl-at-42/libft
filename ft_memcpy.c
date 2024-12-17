#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dstptr;
	unsigned char	*srcptr;

	if ((dst == src) || (n == 0))
		return (dst);
	dstptr = (unsigned char *)dst;
	srcptr = (unsigned char *)src;
	while (n--)
		*dstptr++ = *srcptr++;
	return (dst);
}
