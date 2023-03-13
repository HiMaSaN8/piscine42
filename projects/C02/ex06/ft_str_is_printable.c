/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:01:23 by ialzein           #+#    #+#             */
/*   Updated: 2023/03/02 13:28:09 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_printable(char	*str)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (str[i] != 0)
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			k = 0;
		}
		i++;
	}
	return (k);
}
