/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 11:52:35 by ialzein           #+#    #+#             */
/*   Updated: 2023/03/12 21:30:06 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	lendest;
	int	srcctr;

	lendest = 0;
	srcctr = 0;
	while (dest[lendest] != '\0')
	{
		lendest++;
	}
	while (src[srcctr] != '\0')
	{
		dest[lendest++] = src[srcctr];
		srcctr++;
	}
	dest[lendest] = '\0';
	return (dest);
}

int	strlen_expanded(int size, char **strs, int lensepr)
{
	int	exp_length;
	int	i;

	exp_length = 0;
	i = 0;
	while (i < size)
	{
		exp_length += ft_strlen(strs[i]);
		exp_length += lensepr;
		i++;
	}
	exp_length -= lensepr;
	return (exp_length);
}

char	*ft_strjoin(int size, char *strs[], char *sep)
{
	int		i;
	char	*dest;
	int		exp_length;

	i = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	exp_length = strlen_expanded(size, strs, ft_strlen(sep));
	dest = (char *)malloc(sizeof(char) * exp_length + 1);
	if (!dest)
		return (0);
	while (i < size)
	{
		ft_strcat(dest, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(dest, sep);
		}
		i++;
	}
	return (dest);
}
/*int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 1 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 1 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 1 + 1);
	strs[0] = "a";
	strs[1] = "b";
	strs[2] = "z";
	separator = "ha";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}*/