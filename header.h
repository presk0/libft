#ifndef __HEADER_H__
# define __HEADER_H__

#include <stdlib.h>

int		ft_atoi(char *str);
void	*ft_bzero(void *s, unsigned int n);
void	*ft_calloc(unsigned int count ,unsigned int size);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(void *s, int c, size_t n);
void	*ft_memcmp(void *s1, void *s2, size_t n);
void	*ft_memcpy(void *dst, void *src, size_t n);
void	*ft_memmove(void *dst, void *src, size_t n);
void	*ft_memset(void *b, int c, size_t n);
char	*ft_strdup(char *s);
char	*ft_strlcat(char *dst, char *src, size_t dstsize);
char	*ft_strlcpy(char *dst, char *src, size_t dstsize);
int		ft_strlen(char *s);
int		ft_strncmp(char *s1, char *s2, size_t dstsize);
char	*ft_strnstr(char *haystack,  char *needle, size_t len);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
char	ft_tolower(char c);
char	ft_toupper(char c);

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif