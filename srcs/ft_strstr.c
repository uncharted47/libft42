/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:02:51 by elyzouli          #+#    #+#             */
/*   Updated: 2023/10/04 19:43:07 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	unsigned int	i;

	i = 0;
	if (to_find == NULL || ft_strlen(to_find) == 0)
		return ((char *)str);
	while (i < ft_strlen(str))
	{
		if (ft_strncmp((char *)&str[i], to_find, ft_strlen(to_find)) == 0)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
