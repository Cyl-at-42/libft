#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	else
		if (len > ft_strlen(s + start))
			len = ft_strlen(s + start);
	if (s == NULL)
		substr = NULL;
	else
	{
		substr = (char *)malloc(sizeof(char) * (len + 1));
		if (!substr)
			return (NULL);
		ft_strlcpy(substr, (char *)s + start, len + 1);
	}
	return (substr);
}
