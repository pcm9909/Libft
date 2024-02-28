#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

//memset, bzero, memcpy, memccpy, memmove, memchr, memcmp
void *ft_memset(void *ptr, int value, size_t len);
void ft_bzero(void *ptr, size_t size);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memchr(const void *ptr, int value, size_t len);
int ft_memcmp(const void *ptr1, const void *ptr2, size_t len);

//strlen, strlcpy, strlcat, strchr, strrchr, strnstr, strncmp
size_t ft_strlen(const char *str);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t ft_strlcat(char *dst, const char *src, size_t size);
char *ft_strchr(const char *str, int c);
char *ft_strrchr(const char *str, int c);
char *ft_strnstr(const char *big, const char *little, size_t len);
int ft_strncmp(const char *str1, const char *str2, size_t len);

//atoi, isalpha, isdigit, isalnum, isascii, isprint, toupper, tolower
int ft_atoi(const char *str);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);

//calloc, strdup, substr, strjoin, strtrim, split, itoa, strmapi
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *str);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);
char *ft_itoa(int n);
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

//putchar, putstr, putendl, putnbr
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

//lstnew, lstadd_front, lstsize, lstlast, lstadd_back, lstdelone, lstclear, lstiter, lstmap
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
int ft_lstsize(t_list *lst);
t_list *ft_lstlast(t_list *lst);
void ft_lstadd_back(t_list **lst, t_list *new);
void ft_lstdelone(t_list *lst, void (*del)(void *));
void ft_lstclear(t_list **lst, void (*del)(void *));
void ft_lstiter(t_list *lst, void (*f)(void *));
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));


#endif