/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:21 by username          #+#    #+#             */
/*   Updated: 2026/10/22 14:46:38 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len;
    size_t src_len;
    size_t i;

    dest_len = ft_strlen(dest);
    src_len = ft_strlen(src);
    i = dest_len;
    if (dest_len >= size)
        return (src_len + size);
    while (*src && i < size - 1)
    {
        dest[i] = *src;
        i++;
        src++;
    }
    dest[i] = '\0';
    return (dest_len + src_len);
}

// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
//     char dest[20] = "Hi ";
//     char src[] = "42!";

//     printf("%zu\n", ft_strlcat(dest, src, sizeof(dest)));
//     return (0);
// }