/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 08:33:38 by ialzein           #+#    #+#             */
/*   Updated: 2023/03/02 13:29:29 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

int	ft_str_is_alpha(char	*str)
{
	int	i;
	int	k;

	i = 0;
	k = 1;
	while (str[i] != 0)
	{
		if (str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122)
		{
			k = 0;
		}
		i++;
	}
	return (k);
}
/*int main()
{
	char a[] =  " ";
	printf("%d",ft_str_is_alpha(a));
}*/
