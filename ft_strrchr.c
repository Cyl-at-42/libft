#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	c = (char)c;
	while (*s)
	{
		if (*s == c)
			result = ((char *)s);
		s++;
	}
	if (!c)
		result = ((char *)s);
	return (result);
}
