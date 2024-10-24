#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int ft_isdigit(int c);
int ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_atoi(const char *str);
unsigned int ft_strlen(const char *s);
char *ft_strchr(const char *str, int search_str);
char* ft_strrchr( const char* str, int chr );
int ft_strncmp(const char *string1, const char *string2, size_t count);
void *ft_memchr(const void *buf, int c, size_t count);
int ft_memcmp( const void * pointer1, const void * pointer2, size_t size );
char   *ft_strnstr(const char *haystack, const char *needle, size_t len);
void *ft_memset( void *pointer, int value, size_t count );
void ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dest_str, const void *src_str, size_t numBytes);
void *ft_calloc(size_t count, size_t size);
char *ft_strdup(const char *s1);
char *ft_itoa(int n);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
char *ft_strmapi(const char *s, char (*f)(unsigned int, char));
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);


#endif