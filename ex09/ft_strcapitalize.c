/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 11:47:59 by nfurst            #+#    #+#             */
/*   Updated: 2026/06/26 14:10:11 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_upcase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	ft_lowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int	ft_is_new_word(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_new_word;

	i = 0;
	is_new_word = 1;
	while (str[i] != '\0')
	{
		str[i] = ft_lowcase(str[i]);
		if (is_new_word && str[i] >= 'a' && str[i] <= 'z')
			str[i] = ft_upcase(str[i]);
		if (ft_is_new_word(str[i]))
			is_new_word = 0;
		else
			is_new_word = 1;
		i++;
	}
	return (str);
}

/*
int main(void)
{
	char str[] = "HELLO";
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
*/