/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:20:52 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/10/12 16:42:06 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb == 0)
		return (1);
	else if (nb < 0)
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
