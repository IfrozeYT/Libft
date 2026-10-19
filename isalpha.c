#include <unistd.h>
#include <stdio.h>

void ft_isalpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}

int main   (void)
{
    printf("%d\n", ft_isalpha('a'));
    return (0);
}