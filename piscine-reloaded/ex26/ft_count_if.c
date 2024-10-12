/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:28:55 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/10/12 16:09:50 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;
	int	f_return;

	i = 0;
	count = 0;
	while (tab[i] != NULL)
	{
		f_return = f(tab[i]);
		if (f_return == 1)
			count++;
		i++;
	}
	return (count);
}
/*
int     is_alpha(char *str)
{
        while (*str)
        {
                if (*str < 'A' || *str > 'z' || (*str > 'Z' && *str < 'a'))
                        return (0);
                str++;
        }
        return (1);
}

int	main(void)
{
	char	*str[3] = {"ab0brinha", "chuchu", "beterraba"};
	int	i;

	i = ft_count_if(str, &is_alpha);
	printf("i: %d\n", i);
	return (0);
}*/
