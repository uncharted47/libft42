/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 02:21:46 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/19 16:39:18 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_size(long int n)
{
	size_t	i;

	if (n <= 0)
		i = 1;
	else
		i = 0;

	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	fill_string(char *str, long int num, size_t size)
{
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	str[size] = '\0';
	while (size > 0)
	{
		if (str[size - 1] != '-')
		{
			str[size - 1] = (num % 10) + '0';
			num /= 10;
		}
		size--;
	}
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		size;
	long int	num;

	num = n;
	size = get_size(num);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	fill_string(str, num, size);
	return (str);
}
