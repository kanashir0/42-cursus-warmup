int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
int	main(void)
{
	int	f;

	f = ft_recursive_factorial(5);
	printf("f: %d\n", f);
	return (0);
}*/
