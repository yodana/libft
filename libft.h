#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char *ft_strsub(char const *s, unsigned int start, size_t len);
int		ft_strequ(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char));
char	*ft_strmap(char const *s, char (*f)(char));
void	ft_striter(char *s, void (*f)(char *));
void	ft_bzero(void *s, size_t n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char*   ft_strnew(size_t size);
size_t  ft_strlen(const char *s);
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalphnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
void    *ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char    *ft_strstr(const char *haystack, const char *needle);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_atoi(const char *nptr);
int     ft_toupper(int c);
void    *ft_memalloc(size_t size);
void    ft_strclr(char *s);
void    ft_memdel(void **as);
void    ft_strdel(char **as);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
