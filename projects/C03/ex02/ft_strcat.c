/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 07:50:57 by ialzein           #+#    #+#             */
/*   Updated: 2023/03/05 19:28:19 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int		main(void)
{
	char	dest[] = "hello";
	char	*src;

	src = " pretty World";
	printf("%s\n", ft_strcat(dest, src));
	//printf(".%s.\n", strcat(dest, src));
}*/
