/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 21:01:38 by ialzein           #+#    #+#             */
/*   Updated: 2023/02/28 06:40:56 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	y;
	int	j;

	size--;
	j = 0;
	while (j < size)
	{
		y = tab[j];
		tab[j] = tab[size];
		tab[size] = y ;
		j++;
		size--;
	}
}
/*int main()
{
	int arr[] = {1, 2, 3, 4};
	ft_rev_int_tab(arr, 4);
	printf("%d, %d, %d, %d", arr[0], arr[1], arr[2], arr[3]);
	return 0;
}*/
