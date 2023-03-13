/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 15:47:33 by ialzein           #+#    #+#             */
/*   Updated: 2023/03/09 04:49:46 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_fibonacci(int index)
{
	int	i;

	i = 1;
	if (index == 0 || index == 1)
		return (index);
	else if (index > 1)
		return (ft_fibonacci(index -2) + ft_fibonacci(index - 1));
	else
		return (-1);
}
int main()
{
	printf("%d",ft_fibonacci(4));
}
