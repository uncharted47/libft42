/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 00:06:56 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/19 00:52:34 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	iswhitespace(char *sep, char c)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}


static size_t	ft_count_word(char const *str, char *sep)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (iswhitespace(sep, str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && !iswhitespace(sep, str[i]))
			i++;
	}
	return (count);
}


static size_t	ft_strlenchar(char *str, char *sep)
{
	size_t	i;

	i = 0;
	while (str[i] && !iswhitespace(sep, str[i]))
	{
		i++;
	}
	return (i);
}


static char	*ft_alloc(char *src, char *sep)
{
	int		i;
	char	*split;
	int		size;

	i = 0;
	size = ft_strlenchar(src, sep);
	split = (char *)malloc(sizeof(char) * (size + 1));
	while (i < size)
	{
		split[i] = src[i];
		i++;
	}
	split[i] = '\0';
	return (split);
}


char	**ft_split(char const *str, char *sep)
{
	int			i;
	size_t		size;
	char		**split;
	int			k;

	k = 0;
	i = 0;
	if (str == NULL)
		return (NULL);
	size = ft_count_word(str, sep);
	if (size == 0)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (size + 1));
	while (str[i])
	{
		while (iswhitespace(sep, str[i]))
			i++;
		if (str[i])
			split[k++] = ft_alloc((char *)&str[i], sep);
		while (str[i] && !iswhitespace(sep, str[i]))
			i++;
	}
	split[k] = NULL;
	return (split);
}
