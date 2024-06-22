#include "../libft.h"

void	*ft_freenull_va(char **first, ...)
{
	va_list	vargs;
	char	**current;

	va_start(vargs, first);
	ft_freenull(first);
	current = va_arg(vargs, char **);
	while (*current)
	{
		ft_freenull(current);
		current = va_arg(vargs, char **);
	}
	va_end(vargs);
	return (NULL);
}
