#include "libft.h"

static char	*alloc_str_clone(char *mem, int len)
{
	char	*newstr;
	char	*ptr;

	newstr = malloc((len + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	ptr = newstr;
	while (len--)
		*ptr++ = *mem++;
	*ptr++ = 0;
	return (newstr);
}

char	*ft_itoa(int nb)
{
	char	str[11];
	int		i;
	int		isneg;

	if (!nb)
		return (alloc_str_clone("0", 1));
	if (nb == -2147483648)
		return (alloc_str_clone("-2147483648", 11));
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
	return (alloc_str_clone(&str[i], 11 - i));
}
