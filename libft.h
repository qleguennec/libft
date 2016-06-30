/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 18:28:07 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/28 17:05:15 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <wchar.h>

# define COMPARE(a, b)	(((a) > (b)) - ((a) < (b)))
# define MIN(a,b)		((a <= b) ? a : b)
# define MAX(a,b)		((a >= b) ? a : b)
# define LEN(x)			(sizeof(x) / sizeof(x[0]))
# define SIGN(x)		((x < 0) ? 1 : 0)
# define ABS(x)			((x < 0) ? - x : x)

char			*ft_itoa(int n);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strchr(const char *s, int c);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strdup(const char *s);
char			*ft_strend(char const *s1);
char			*ft_strncat(char *dest, const char *src, size_t n);
char			*ft_strncpy(char *dest, const char *src, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strnstr(const char *s1, const char *s2, size_t n);
char			*ft_strrchr(const char *s, int c);
char			*ft_strrev(char const *s);
char			*ft_strstr(const char *s1, const char *s2);
char			*ft_strtrim(char const *s);
int				ft_atoi(const char *s);
int				ft_bytecmp(const void *p, unsigned char c, size_t n);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_islower(int c);
int				ft_isprint(int c);
int				ft_isspace(int c);
int				ft_isupper(int c);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_strcmp(char const *s1, char const *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_tolower(int i);
int				ft_toupper(int i);
size_t			ft_strfind(const char *s, char c);
size_t			ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t			ft_strlen(const char *s);
size_t			ft_wstrlen(const wchar_t *s);
unsigned long	ft_pow(unsigned long a, unsigned long n);
void			ft_bzero(void *s, size_t n);
void			*ft_find(char *str, void *fst, void *lst, size_t size);
void			*ft_memalloc(size_t size);
void			*ft_memccpy(void *dest, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			ft_memdel(void **ap);
void			*ft_memdup(void *p, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memnchr(const void *s, int c, size_t n);
void			*ft_mempcpy(void *dest, const void *src, size_t len);
void			*ft_memset(void *s, int c, size_t n);
void			ft_putchar(char s);
void			ft_putchar_fd(char s, int fd);
void			ft_putendl(char const *s);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_putnbr(int n);
void			ft_putstr(char const *s);
void			ft_putstr_fd(char const *s, int fd);

#endif
