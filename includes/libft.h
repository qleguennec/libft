/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 18:28:07 by qle-guen          #+#    #+#             */
/*   Updated: 2016/06/21 13:36:52 by qle-guen         ###   ########.fr       */
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

typedef struct		s_list
{
	void			*data;
	size_t			size;
	struct s_list	*next;
}					t_list;

void				ft_putchar(char s);
void				ft_putstr(char const *s);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putchar_fd(char s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
size_t				ft_strlen(const char *s);
size_t				ft_wstrlen(const wchar_t *s);
void				ft_strclr(char *s);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcpy(char *dest, const char *src);
void				ft_striteri(char *s, void (*f)(unsigned int, char*));
void				ft_striter(char *s, void (*f) (char *s));
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strmap(char const *s, char (*f)(char));
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcmp(char const *s1, char const *s2);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strrchr(const char *s, int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strend(char const *s1);
char				*ft_strdup(const char *s);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strnstr(const char *s1, const char *s2, size_t n);
char				*ft_strstr(const char *s1, const char *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t				ft_strfind(const char *s, char c);
char				**ft_strsplit(const char *s, char c);
char				*ft_strtrim(char const *s);
char				*ft_strrev(char const *s);
int					ft_strfind_generic(const char *str, int (*f) (int));
void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				*ft_mempcpy(void *dest, const void *src, size_t len);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memnchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_bytecmp(const void *p, unsigned char c, size_t n);
void				*ft_memdup(void *p, size_t n);
int					ft_tolower(int i);
int					ft_toupper(int i);
int					ft_isalnum(int c);
int					ft_isdigit(int c);
int					ft_isspace(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
char				*ft_itoa(int n);
int					ft_atoi(const char *s);
int					ft_pow(int a, int n);
size_t				ft_max(size_t a, size_t b);
size_t				ft_min(size_t a, size_t b);
int					ft_isupper(int c);
int					ft_islower(int c);
void				ft_putintlst(t_list *t);
void				*ft_lstfoldl
	(void *(*f) (void *, void *), void *b, t_list *l);
t_list				*ft_lstnew (void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f) (t_list *elem));
int					ft_lstcmp(t_list *a, t_list *b);
int					ft_lstequ(t_list *a, t_list *b);
t_list				*ft_lstrange(int a, int b);
t_list				*ft_lstindex(int n);
void				ft_lstdelone(t_list **alst, void (*del) (void *, size_t));
void				ft_lstdel(t_list **alst, void (*del) (void *, size_t));
void				ft_lstiter(t_list *lst, void (*f) (t_list *elem));
t_list				*ft_lstadd(t_list **alst, t_list *new);
t_list				*ft_lstadd_end(t_list **alst, t_list *new);
t_list				*ft_lststr(char *s);
void				ft_lstpush
	(t_list **alst, void *content, size_t content_size);
int					ft_lstsize(t_list *a);
void				ft_delete(void *p, size_t size);
int					ft_lstbuild(t_list *alst);
int					ft_lstrevbuild(t_list *alst);
size_t				ft_lstsum(t_list *l);

#endif
