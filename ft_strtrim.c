#include "libft.h"

static char	*strstart(char const *s1, char const *delims)
{
	while (*s1)
	{
		if (delims[(unsigned char)*s1])
			s1++;
		else
			return ((char *)s1);
	}
	return ((char *)s1);
}

static char	*allocmidstr(char *s1, size_t len)
{
	char	*resultstr;
	size_t	i;

	resultstr = (char *) malloc((len + 1) * sizeof(char));
	if (!resultstr)
		return (NULL);
	resultstr[len] = 0;
	i = 0;
	while (i < len)
		resultstr[i++] = *s1++;
	return (resultstr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	isdelim[256];
	char	*s2;

	if (!set || !s1 || !*s1)
		return (ft_strdup(""));
	ft_memset((void *)isdelim, 0, 256);
	while (*set)
		isdelim[(unsigned char)*set++] = 1;
	s1 = strstart(s1, isdelim);
	if (!*s1)
		return (ft_strdup(""));
	s2 = (char *)s1;
	while (*s2++)
		;
	s2--;
	while (isdelim[(unsigned char)*--s2])
		;
	return (allocmidstr((char *)s1, s2 - s1 + 1));
}
