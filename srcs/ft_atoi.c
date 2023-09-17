/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:18:00 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/17 21:55:27 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int			i;
	long int	n;
	int			sign;

	i = 0;
	n = 0;
	sign = 1;
	if (str == NULL || (str != NULL && *str == '\0'))
		return (NULL);
	while (iswhitespace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 +(str[i] - '0');
		i++;
	}
	return (n * sign);
}
