/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 04:40:00 by ialzein           #+#    #+#             */
/*   Updated: 2023/03/09 10:06:02 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	main(int c, char **v)
{
	int	i;

	i = 0;
	if (c > 0)
	{
		while (v[0][i] != 0)
		{
			write(1, &v[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
