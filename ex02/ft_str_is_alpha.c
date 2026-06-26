/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/26 09:06:12 by nfurst            #+#    #+#             */
/*   Updated: 2026/06/26 10:16:50 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
int main(void)
{
	char *str1;
	char *str2;
	char *str3;
	int res;

	res = 0;
	str1 = "Hello";
	str2 = "abcdefghijkl";
	str3 = "abcghij[`aBCZ";
	res = ft_str_is_alpha(str1);
	printf("%d", res);
	res = ft_str_is_alpha(str2);
	printf("%d", res);
	res = ft_str_is_alpha(str3);
	printf("%d", res);
	return (0);
}
*/
