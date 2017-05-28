/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 18:28:07 by qle-guen          #+#    #+#             */
/*   Updated: 2017/05/28 21:28:57 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*p;
	struct s_list	*next;
}					t_list;

typedef int			(*t_cmp_f) (void *, void *);

char				*ft_atoi(char *s, unsigned long *n, int base, int ucase);
char				*ft_strchr(const char *s, int c);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strdup(const char *s);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *s1, const char *s2);
int					ft_bytecmp(const void *p, unsigned char c, size_t n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_islower(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_isupper(int c);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_only(void *p1, size_t n1, void *p2, size_t n2);
int					ft_strcmp(char const *s1, char const *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_tolower(int i);
int					ft_toupper(int i);
size_t				ft_strlen(const char *s);
unsigned char		**ft_nsplit(void *s, size_t n1, void *match, size_t n2);
unsigned char		*ft_word(void **p, size_t *n1, void *match, size_t n2);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memdup(void *p, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				ft_iqsort(int *t, size_t n, int rev);
void				ft_qsort(void **t, size_t n, t_cmp_f cmp, int rev);
int					ft_min(int a, int b);

#endif
