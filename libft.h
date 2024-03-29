/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashari <ashari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 19:16:05 by ashari            #+#    #+#             */
/*   Updated: 2019/04/24 18:22:32 by ashari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

# define			RESULT_TRUE		1
# define			RESULT_FALSE	0

# define			MIN_INTEGER		-2147483648

# define            BOUNDARY_VALUE	9223372036854775807
# define			NEGATIVE_VALUE	-1
# define			POSITIVE_VALUE	1

void				*ft_memalloc(size_t size);
void				*ft_realloc(void *ptr, size_t size);
void				ft_memdel(void **ap);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memcpy(void *dest, const void *src, size_t n);

char				*ft_itoa(int n);
int					ft_atoi(const char *str);
void				ft_bzero(void *s, size_t n);

t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list				*ft_lstnew(void const *content, size_t content_size);

void				ft_swap(int *a, int *b);
int					ft_sqrt(int n);

int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_isxdigit(int c);
int					ft_isblank(int c);
int					ft_isspace(int c);
int					ft_isprint(int c);
int					ft_isdigit(int c);
int					ft_isascii(int c);
int					ft_isalpha(int c);
int					ft_isalnum(int c);

char				*ft_strndup(const char *s1, size_t n);
char				**ft_strsplit(char const *s, char c);
char				*ft_strtrim(char const *s);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strmap(char const *s, char (*f)(char));
void				ft_strdel(char **as);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strnew(size_t size);
void				ft_striter(char *s, void (*f)(char *));
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
int					ft_strnequ(char const *s1, char const *s2, size_t n);

int					ft_strequ(char const *s1, char const *s2);
void				ft_putstr(char const *s);
void				ft_putchar(char c);
void				ft_strclr(char *s);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *s);

char				*ft_strrchr(const char *s, int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

char				*ft_strdup(const char *s1);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strchr(const char *s, int c);
char				*ft_strnstr(const char *haystack, const char *needle, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strncpy(char *dest, const char *src, unsigned int n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putchar_fd(char c, int fd);

#endif
