/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 02:21:46 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/16 21:05:49 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	get_size(long int n)
{
	size_t	i;

	i = 1;
	if(n < 0)
	{
		n *=-1;
		i++;
	}
	while (n /= 10)
		i++;
	return (i);
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
	if (n < 0)
	{
		num *= -1;
		str[0] = '-';
	}
	str[size] = '\0';
	while (size > 0)
	{
		str[--size] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
