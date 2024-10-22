#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <string.h>


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


#endif