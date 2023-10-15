/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 01:18:00 by elyzouli          #+#    #+#             */
/*   Updated: 2023/10/09 02:53:12 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*skipwhitespace(const char *c, int *sign)
{
	while (*c == ' ' || *c == '\t' || *c == '\n'
		|| *c == '\r' || *c == '\v' || *c == '\f')
		c++;
	if (*c == '-' || *c == '+')
	{
		if (*c == '-')
			*sign = -1;
		c++;
	}
	return (c);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	sign;

	i = 0;
	n = 0;
	sign = 1;
	if (str == NULL || (str != NULL && *str == '\0'))
		return (0);
	str = skipwhitespace(str, &sign);
	while (ft_isdigit(str[i]))
		n = (n * 10) + (str[i++] - '0');
	return (n * sign);
}
