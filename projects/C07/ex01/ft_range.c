/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:58:58 by ialzein           #+#    #+#             */
/*   Updated: 2023/03/11 13:13:20 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	*ary;
	int	i;

	if (min >= max)
		return (NULL);
	ary = malloc((max - min) * sizeof(int));
	if (ary == 0)
		return (NULL);
	i = 0;
	while (i < max - min)
	{
		ary[i] = min + i;
		i++;
	}
	return (ary);
}
/*
int		main(void)
{
	int	a;
	int	b;
	int	*ptr;
	int	i = 0;
	int	size;

	a = 5;
	b = 10;
	size = b - a;
	tab = ft_range(a, b);
	while(i < size)
	{
		printf("%d, ", ptr[i]);
		i++;
	}

}*/
