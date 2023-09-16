/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:18:00 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/16 02:09:50 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int			i;
	long int	n;
	int			sign;

	i = 0;
	n = 0;
	sign = 1;

	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 +(str[i] - '0');
		i++;
	}
	return (n * sign);
}
