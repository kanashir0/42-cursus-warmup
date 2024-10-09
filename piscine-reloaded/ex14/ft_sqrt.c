int	test_sqrt(int nb, int guess)
{
	if (nb / guess == guess && nb % guess == 0)
		return (guess);
	else if (guess <= 2)
		return (0);
	else
		return (test_sqrt(nb, guess - 1));
}

int	ft_sqrt(int nb)
{
	if (nb > 2147395600)
		return (0);
	if (nb / 2 > 46340)
		return (test_sqrt(nb, 46340));
	else
		return (test_sqrt(nb, nb / 2));
}
/*
#include <stdio.h>
int	main(void)
{
	int	x;

	x = ft_sqrt(2147395600);
	printf("sqrt: %d\n", x);
}*/
