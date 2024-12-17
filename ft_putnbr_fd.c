#include "libft.h"

static int	ft_putnbr_specific(int nb, int fd)
{
	if (!nb)
	{
		write(fd, "0", 1);
		return (1);
	}
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (1);
	}
	return (0);
}

void	ft_putnbr_fd(int nb, int fd)
{
	char	str[11];
	int		i;
	int		isneg;

	if (ft_putnbr_specific(nb, fd))
		return ;
	isneg = (nb < 0);
	if (isneg)
		nb *= -1;
	i = 10;
	while (nb)
	{
		str[i--] = '0' + nb % 10;
		nb /= 10;
	}
	if (isneg)
		str[i--] = '-';
	i++;
	write(fd, &str[i], 11 - i);
}
