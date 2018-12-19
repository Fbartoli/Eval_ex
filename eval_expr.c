/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 10:03:05 by flbartol          #+#    #+#             */
/*   Updated: 2018/09/16 21:25:16 by flbartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

int		numbers(char **expr)
{
	int nbr;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		nbr = summands(expr);
		if (**expr == ')')
			(*expr)++;
		return (nbr);
	}
	return (ft_atoi(expr));
}

int		factors(char **expr)
{
	int		nbr;
	int		nbr2;
	char	sign;

	nbr = numbers(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		sign = **expr;
		if (sign != '/' && sign != '*' && sign != '%')
			return (nbr);
		(*expr)++;
		nbr2 = numbers(expr);
		if (sign == '/')
			nbr /= nbr2;
		else if (sign == '*')
			nbr *= nbr2;
		else
			nbr %= nbr2;
	}
	return (nbr);
}

int		summands(char **expr)
{
	int		nbr;
	int		nbr2;
	char	sign;

	nbr = factors(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		sign = **expr;
		if (sign != '+' && sign != '-')
			return (nbr);
		(*expr)++;
		nbr2 = factors(expr);
		if (sign == '+')
			nbr += nbr2;
		else
			nbr -= nbr2;
	}
	return (nbr);
}

int		eval_expr(char *expr)
{
	return (summands(&expr));
}
