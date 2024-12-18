#include "libft.h"

size_t	ft_strlen(const char *s)
{
	char	*s2;

	s2 = (char *) s;
	while (*s2++)
		;
	return (--s2 - s);
}
