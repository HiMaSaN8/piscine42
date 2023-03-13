/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:19:16 by ialzein           #+#    #+#             */
/*   Updated: 2023/03/06 13:55:21 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
/*int main (void)
{
    printf("This should be 2147483648\n");
    ft_putnbr(2147483647);
    printf("\nThis should be -2147483648\n");
    ft_putnbr(-2147483648);
    printf("\nThis should be 0");
    ft_putnbr(0);
    printf("\nThis should be 1");
    ft_putnbr(1);
    printf("\nThis should be 42");
    ft_putnbr(42);
    printf("\n");
    return (0);
}*/
