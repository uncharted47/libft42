/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elyzouli <elyzouli@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:42:01 by elyzouli          #+#    #+#             */
/*   Updated: 2023/09/19 23:17:23 by elyzouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);
char	*ft_itoa(int n);
void	ft_bzero(void *buffer, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t size);
int		ft_memcmp(const void *pointer1, const void *pointer2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *pointer, int value, size_t count);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(char *str);
size_t	ft_strlen(const char *str);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, char *src, size_t n);
size_t	ft_strlcat(char *dest, char *src, size_t size);
char	*ft_strrchr(const char *str, int c);
char	*ft_strchr(const char *str, int c);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char	**ft_split(char const *str, char *sep);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isalnum(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strclr(char *s);

#endif
