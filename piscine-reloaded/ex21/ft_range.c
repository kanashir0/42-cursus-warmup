/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:28:41 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/10/12 16:25:33 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	arr = NULL;
	if (min >= max)
		return (arr);
	arr = (int *) malloc((max - min) * sizeof(int));
	i = 0;
	while (max > min)
	{
		max--;
		arr[i] = max;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>
int main(void)
{
	int *arr;
	int i;
	int min;
	int max;

	min = -3;
	max = 0;
	arr = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d ", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/
