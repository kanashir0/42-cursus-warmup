int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include	<stdio.h>
int	main(void)
{
	int	c;
	char	*str = "pizza de bauru de pizza";

	c = ft_strlen(str);
	printf("len: %d\n", c);
	return (0);
}*/
