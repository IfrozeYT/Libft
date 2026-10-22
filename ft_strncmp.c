/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:24 by username          #+#    #+#             */
/*   Updated: 2026/10/22 20:02:48 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int i;

    i = 0;
    
    if (!s1 && !s2)
        return (0);
    while (i < n && s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     const char *str1 = "not quite my tempo";
//     const char *str2 = "not qujte my tempo";
//     size_t n = 10;

//     int res = ft_strncmp(str1, str2, n);
//     printf("Result: %d\n", res); // Output: Result: 0
//     return (0);
// }