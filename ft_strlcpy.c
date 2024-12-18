#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	s_len;

	s_len = ft_strlen(src);
	i = 0;
	if (size)
	{
		while (src[i] && i < size - 1)
			*dest++ = src[i++];
		*dest = '\0';
	}
	return (s_len);
}
