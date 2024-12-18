#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*returnstr;

	str = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	returnstr = str;
	while (*s)
		*str++ = *s++;
	*str++ = 0;
	return (returnstr);
}
