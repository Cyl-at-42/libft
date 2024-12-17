#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	*s2;

	s2 = (char *) s;
	while (*s2++)
		;
	write(fd, s, --s2 - s);
}
