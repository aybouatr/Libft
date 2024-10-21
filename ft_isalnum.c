#include "libft.h"
#include <stdio.h>

int ft_isalnum(int c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
        return (1);
    return (0);    
}

int main()
{
    printf("---> %d \n",ft_isalnum('.'));`
}