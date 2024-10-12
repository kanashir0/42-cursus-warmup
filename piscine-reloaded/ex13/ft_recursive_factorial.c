/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:21:06 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/10/12 16:38:11 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	else
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
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
