#include <stdio.h>
#include <unistd.h>

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}
int main(void)
{
    printf("%d\n", ft_isdigit('5'));
    return (0);
}