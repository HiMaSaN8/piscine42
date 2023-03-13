/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 09:28:43 by ialzein           #+#    #+#             */
/*   Updated: 2023/02/28 10:07:02 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_swap(int	*a, int	*b)
{
	int	p;

	p = *a;
	*a = *b;
	*b = p;
}
/*
#include <stdio.h>
int main()
{
	int	a = 5;
	int b = 1;

	int *e;
	int *f;

	e = &a;
	f = &b; 
	ft_swap(&a, &b);

	write(1, &a, 1);
	write(1, "\n", 1);
	write(1, &b, 1);
	write(1, "\n", 1);
	ft_swap(&a, &b);
	printf("%d %d", a, b);
}*/
