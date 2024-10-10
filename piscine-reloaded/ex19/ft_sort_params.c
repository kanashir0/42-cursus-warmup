void	ft_putchar(char c);

void	swap(char **s1, char **s2)
{
	char	*buffer;

	buffer = *s1;
	*s1 = *s2;
	*s2 = buffer;
	return ;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
}

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

void	print_args(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return ;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < (argc - i))
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
				swap(&argv[j], &argv[j + 1]);
			j++;
		}
		i++;
	}
	print_args(argc, argv);
	return (0);
}
/*
#include <unistd.h>

void    ft_putchar(char c)
{
        write(1, &c, 1);
}*/
