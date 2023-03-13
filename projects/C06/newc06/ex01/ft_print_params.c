/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 07:46:15 by ialzein           #+#    #+#             */
/*   Updated: 2023/03/09 08:10:06 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int c, char **v)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (c > 1)
	{
		while (i < c)
		{
			while (v[i][j] != 0)
			{
				write(1, &v[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
			j = 0;
		}
	}
}
