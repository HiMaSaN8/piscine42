/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 10:44:03 by ialzein           #+#    #+#             */
/*   Updated: 2023/03/09 04:47:55 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power >= 0)
	{
		if (power == 0)
			return (1);
		while (power > 0)
		{
			result = result * nb;
			power--;
		}
		return (result);
	}
	else
		return (0);
}
int main()
{
	printf("%d", ft_iterative_power(-2,2));
}
