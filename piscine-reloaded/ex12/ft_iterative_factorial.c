int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 1)
		return (0);
	i = nb - 1;
	while (i > 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	int	f;

	f = ft_iterative_factorial(4);
	printf("f: %d\n", f);
	return (0);
}*/
