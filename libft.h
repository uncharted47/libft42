/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:00:28 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/19 15:14:59 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(char *str);
char	*ft_itoa(int n);
void	ft_bzero(void *buffer, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t size);
int		ft_memcmp(const void *pointer1, const void *pointer2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*memset(void *pointer, int value, size_t count);
char	*ft_strdup(char *str);
int		ft_strlen(const char *str);
char	*strncpy(char *dest, const char *src, size_t n);
char	*strcpy(char *dest, const char *src);

#endif
