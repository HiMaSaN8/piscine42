/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcapitalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ialzein <ialzein@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:52:23 by ialzein           #+#    #+#             */
/*   Updated: 2023/03/02 13:42:05 by ialzein          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

//#include<stdio.h>
char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	int		i;
	int		k;
	char	c;

	i = 0;
	k = 1;
	while (*(str + i) != '\0')
	{
		c = *(str + i);
		if (k == 1 && c >= 'a' && c <= 'z')
			str[i] -= 32;
		else if (k == 0 && c >= 'A' && c <= 'Z')
			str[i] += 32;
		if (c < '0' || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || c > 122)
			k = 1;
		else
			k = 0;
		i++;
	}
	return (str);
}
/*int main()
{
	char a[] = "salut, ComVent tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s",ft_strcapitalize(a));
}*/
