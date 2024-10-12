/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:18:58 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/10/12 12:19:41 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	buf;

	buf = *a;
	*a = *b;
	*b = buf;
	return ;
}
/*
#include <stdio.h>
int	main(void)
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 30;
	ft_swap(&num1, &num2);
	printf("num1: %d, num2: %d\n", num1, num2);
	return (0);
}*/
