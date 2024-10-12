/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyasuhir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 12:23:41 by gyasuhir          #+#    #+#             */
/*   Updated: 2024/10/12 12:23:43 by gyasuhir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
#include	<stdio.h>
int	main(void)
{
	int	c;
	char	*str = "pizza de bauru de pizza";

	c = ft_strlen(str);
	printf("len: %d\n", c);
	return (0);
}*/
