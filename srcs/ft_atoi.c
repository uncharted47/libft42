/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:18:00 by elyzouli          #+#    #+#             */
/*   Updated: 2023/10/01 01:13:19 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define LLONG_MAX 9223372036854775807
#define LLONG_MIN -9223372036854775808

static int	iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n'
		|| c == '\r' || c == '\v' || c == '\f')
		return (1);
	return (0);
}

static int	ft_result(int count, long long int n, int sign)
{
	if (count > 1)
		return (0);
	else if (n < LLONG_MIN && sign == -1)
		return (0);
	else if (n > LLONG_MAX && sign == 1)
		return (-1);
	else
		return (n * sign);
}

int	ft_atoi(const char *str)
{
	int			i;
	long long	n;
	int			sign;
	int			count;

	i = 0;
	n = 0;
	sign = 1;
	count = 0;
	if (str == NULL || (str != NULL && *str == '\0'))
		return (0);
	while (iswhitespace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		n = (n * 10) + (str[i++] - '0');
	return (ft_result(count, n, sign));
}
