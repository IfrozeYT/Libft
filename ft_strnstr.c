/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:25 by username          #+#    #+#             */
/*   Updated: 2026/10/23 19:27:59 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    
    if (!little)
        return ((char *) big);
    while (big[i] != '\0' && i < len)
    {
        if (big[i] == little[j])
		{
			while (big[i + j] == little[j] && j + i < len && big[i + j])
			{
				j++;
				if (little[j] == '\0')
					return ((char *) &big[i]);
			}
		}
		j = 0;
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    const char *big = "Hello, World!";
    const char *little = "World";
    size_t len = 12;

    char *result = strnstr(big, little, len);
    if (result != NULL)
        printf("Substring found at position: %ld\n", result - big);
    else
        printf("Substring not found in the first %zu bytes.\n", len);

    return 0;
}