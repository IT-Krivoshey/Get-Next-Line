/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jstaunto <jstaunto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 13:59:10 by jstaunto          #+#    #+#             */
/*   Updated: 2020/08/25 13:59:10 by jstaunto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

size_t				ft_strlcat(char *dst, const char *src, size_t sz);
size_t				ft_strlen(const char *str);

char				*ft_strnstr(const char *hstk, const char *ndle, size_t len);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strncpy(char *dst, const char *src, size_t n);
char				*ft_strncat(char *dst, const char *src, size_t n);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strcat(char *dst, const char *src);
char				**ft_strsplit(char const *s, char c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strchr(const char *s, int c);
char				*ft_strtrim(char const *s);
char				*ft_strnew(size_t size);
char				*ft_itoa(int n);

int					ft_memcmp(const void *str1, const void *str2, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_howmwords(const char *str, char c);
int					ft_atoi(const char *str);
int					ft_isallwspace(char c);
int					ft_isplwspace(char c);
int					ft_iswspace(char c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				*ft_memmove(void *dst, const void *src, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				*ft_memset(void *meptr, int val, size_t num);
void				*ft_memchr(const void *str, int c, size_t n);
void				ft_lstadd(t_list **alsti, t_list *new);
void				ft_striter(char *s, void (*f)(char *));
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putchar_fd(char c, int fd);
void				ft_bzero(void *s, size_t n);
void				*ft_strdup(const char *src);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl(char const *s);
void				ft_putstr(char const *s);
void				*ft_memalloc(size_t sz);
void				ft_strdel(char **as);
void				ft_memdel(void **p);
void				ft_putchar(char c);
void				ft_strclr(char *s);
void				ft_putnbr(int n);

#endif
