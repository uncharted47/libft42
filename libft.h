/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 22:00:28 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/19 18:41:14 by elyzouli         ###   ########.fr       */
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
size_t	ft_strlen(const char *str);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, char *src, size_t n);
size_t	ft_strlcat(char *dest, char *src, size_t size);
char	*ft_strrchr(const char *str, int c);
char	*ft_strchr(const char *str, int c);

#endif
