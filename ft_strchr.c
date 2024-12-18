#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c = (char)c;
	while (*s != '\0' && *s != c)
		s++;
	if (c == *s)
		return ((char *)s);
	return (NULL);
}
