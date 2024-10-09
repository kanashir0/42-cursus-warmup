void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	return ;
}

#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 40;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	printf("a: %d, b: %d, div: %d, mod:%d\n", a, b, div, mod);
	return (0);
}
