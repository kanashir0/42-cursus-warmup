/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:21:19 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/10/12 16:56:04 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	if (nb > 2147395600)
		return (0);
	if (nb / 2 > 46340)
		return (test_sqrt(nb, 46340));
	else
		return (test_sqrt(nb, nb / 2));
}

#include <stdio.h>
int	main(void)
{
	int	x;

	x = ft_sqrt(2147395600);
	printf("sqrt: %d\n", x);
}
