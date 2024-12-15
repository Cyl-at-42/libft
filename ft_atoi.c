#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		nbr;
	char	sign;

	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	sign = 1 - ((*nptr == '-') << 1);
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	nbr = 0;
	while (*nptr >= '0' && *nptr <= '9')
		nbr = nbr * 10 + (*nptr++ - '0');
	return (nbr * sign);
}
