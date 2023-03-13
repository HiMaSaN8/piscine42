/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 08:30:07 by ialzein           #+#    #+#             */
/*   Updated: 2023/03/11 13:14:08 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ary;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ary = malloc((max - min) * sizeof(int));
	if (ary == 0)
	{
		*range = NULL;
		return (-1);
	}
	*range = ary;
	while (i < max - min)
	{
		ary[i] = min + i;
		i++;
	}
	return (max - min);
}
/*int		main(void)
{
	int	a;
	int	b;
	int	*ptr;
	int	i = 0;
	int	size;

	a = 5;
	b = 10;
	size = ft_ultimate_range(&ptr, a, b);
	while(i < size)
	{
		printf("%d, ", ptr[i]);
		i++;
	}

}*/
