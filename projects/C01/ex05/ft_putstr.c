/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:04:21 by ialzein           #+#    #+#             */
/*   Updated: 2023/02/28 10:08:03 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putstr(char *str)
{
	int	j;/Users/ialzein/Desktop/c02/ex04/ft_str_is_lowercase.c

	j = 0;
	while (str [j] != 0)
	{
		write(1, &str[j], 1);
		j++;
	}
}
