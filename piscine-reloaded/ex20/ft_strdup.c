#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*str;

	len = ft_strlen(src);
	str = (char *) malloc((len + 1) * sizeof(char));
	i = 0;
	while (*src)
	{
		str[i] = *src;
		src++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*src = "dor de joelho";
	char	*dest;

	dest = ft_strdup(src);
	printf("dest: %s\n", dest);
	free(dest);
	return (0);
}*/
