/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:07:46 by ialzein           #+#    #+#             */
/*   Updated: 2023/02/28 06:31:01 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str [j] != 0)
	{
		j++;
	}
	return (j);
}

/*int main()
{
	ft_strlen("asdfasd");
}*/
