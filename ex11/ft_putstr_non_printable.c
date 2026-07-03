/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfurst <nfurst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 10:53:06 by nfurst            #+#    #+#             */
/*   Updated: 2026/07/03 11:07:23 by nfurst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_hex(unsigned char c)
{
	char	*base;
	char	res[2];

	base = "0123456789abcdef";
	res[0] = base[c / 16];
	res[1] = base[c % 16];
	write(1, "\\", 1);
	write(1, res, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
			ft_put_hex((unsigned char)str[i]);
		i++;
	}	
}
