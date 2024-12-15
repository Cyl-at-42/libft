#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalsize;
	void	*resultptr;

	totalsize = nmemb * size;
	resultptr = NULL;
	if (totalsize == 0 || nmemb <= SIZE_MAX / size)
		resultptr = malloc(totalsize);
	if (resultptr != NULL)
		ft_bzero(resultptr, totalsize);
	return (resultptr);
}
