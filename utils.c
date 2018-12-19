/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 09:22:24 by flbartol          #+#    #+#             */
/*   Updated: 2018/09/16 22:35:50 by flbartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nb2;

	nb2 = nb;
	if (nb < 0)
	{
		ft_putchar('-');
		nb2 = nb * -1;
	}
	if (nb2 > 9)
	{
		ft_putnbr(nb2 / 10);
	}
	ft_putchar(nb2 % 10 + 48);
}

int		ft_atoi(char **str)
{
	int nb;

	nb = 0;
	while (**str >= '0' && **str <= '9')
	{
		nb = nb * 10 + (**str - 48);
		(*str)++;
	}
	return (nb);
}
