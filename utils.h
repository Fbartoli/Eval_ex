/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flbartol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 10:39:16 by flbartol          #+#    #+#             */
/*   Updated: 2018/09/16 21:24:16 by flbartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

void	ft_putchar(char c);
void	ft_putnbr(int nbr);
int		ft_atoi(char **str);
int		eval_expr(char *expr);
int		summands(char **expr);
int		factors(char **expr);
int		numbers(char **expr);

#endif
