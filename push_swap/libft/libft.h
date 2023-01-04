/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:03:09 by maksoy            #+#    #+#             */
/*   Updated: 2022/02/17 22:31:16 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(const char *char_to_num);
void			ft_bzero(void *str, size_t len);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strtrim(char const *s1, char const *del);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_substr(char const *str, unsigned int start, size_t len);
char			*ft_strdup(const char *str1);
char			*ft_strnstr(const char *haystack,
					const char *needle, size_t len);
int				ft_memcmp(const void *str1,
					const void *str2, size_t num);
size_t			ft_strlcat(char *str_d, const char *str_s, size_t n);
void			*ft_memchr(const void *str, int chr, size_t n);
size_t			ft_strlcpy(char *src_d, const char *src_s, size_t n);
void			*ft_memmove(void *str_d, const void *str_s, size_t n);
int				ft_toupper(int num);
int				ft_tolower(int num);
char			*ft_strrchr(const char *str, int num);
int				ft_strncmp(const char *str1, const char *str2, size_t byte);
int				ft_strlen(const char *str);
char			*ft_strchr(const char *str, int target);
void			*ft_memset(void *str, int num, size_t byt);
void			*ft_memcpy(void *dest, const void *source, size_t byt);
int				ft_isprint(int num);
int				ft_isdigit(int num);
int				ft_isascii(int num);
int				ft_isalpha(int num);
int				ft_isalnum(int num);
void			*ft_calloc(size_t count, size_t size);
void			ft_putstr_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putchar_fd(char c, int fd);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
#endif
