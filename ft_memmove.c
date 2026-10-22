/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:20 by username          #+#    #+#             */
/*   Updated: 2026/10/21 22:37:06 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char	*d;
    const unsigned char	*s;

    d = dest;
    s = src;
    if (!dest && !src)
        return (NULL);
    if (d < s)
    {
        while (n--)
            *d++ = *s++;
    }
    else
    {
        d += n;
        s += n;
        while (n--)
            *--d = *--s;
    }
    return (dest);
}

// #include <stdio.h>

// int main(void)
// {
//     char str1[] = "Not quite my tempo";
//     char str2[20]; 

//     str2[0] = '\0'; // Initialize str2 to an empty string
//     printf("String exemple: %s\n", str1);
//     printf("avant: %s\n", str2);
//     ft_memmove(str2, str1, 17);
//     printf("apres: %s\n", str2);

//     return 0;
// }