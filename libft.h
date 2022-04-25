/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: supersko <ndionis@student.42mulhouse.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:03:26 by supersko          #+#    #+#             */
/*   Updated: 2022/04/25 20:27:37 by supersko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

char	**ft_split(char const *s, char c);
char	**make_tab(char **ret, char const *s, char c, unsigned int nb_wd);
char	*ft_get_next_wd(char *sentence, char sep);
char	*ft_itoa(int n);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int 	ft_atoi(const char *str0);
int 	ft_isalnum(int c);
int 	ft_isalpha(int c);
int 	ft_isascii(int c);
int 	ft_isdigit(int c);
int 	ft_isprint(int c);
int 	ft_memcmp(const void *s1, const void *s2, size_t n);
int 	ft_printf(const char *str0, ...);
int 	ft_strncmp(const char *s1, const char *s2, size_t n);
int 	ft_tolower(int c);
int 	ft_toupper(int c);
int 	ft_wd_count(char *str, char sep);
size_t	ft_print_addr(void *num);
size_t	ft_print_hexa(long long unsigned int num, char CASE);
size_t	ft_print_int(int num);
size_t	ft_print_str(char *str);
size_t	ft_print_unsigned(unsigned int num);
size_t	ft_recursive_print_int(int num, size_t *len);
size_t	ft_recursive_print_unsigned(unsigned int num, size_t *len);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
size_t	ft_strlen_char(char *str, char sep);
size_t	printing_loop(char *str, va_list *ap);
void	*ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *str0, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, unsigned int len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);
void	error_msg(char *msg);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_recursive_print_addr(long long unsigned int num, size_t *len);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void    put_header(void);
int ft_atoi_arg(char *str_nb);

#endif
