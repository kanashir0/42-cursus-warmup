int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include	<stdio.h>
int	main(void)
{
	int	r;
	char	*s1 = "saladinhaa";
	char	*s2 = "saladinhaaa";

	r = ft_strcmp(s1, s2);

	printf("r: %d\n", r);
	return (0);
}*/
