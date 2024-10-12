/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:59:13 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/10/12 15:14:48 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>
void	print_num(int num)
{
	printf("%d|", num);
}
int	main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int	i;

	ft_foreach(arr, 5, &print_num);
	
	i = 0;
	while (i < 5)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}*/
