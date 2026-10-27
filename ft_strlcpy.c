/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:22 by username          #+#    #+#             */
/*   Updated: 2026/10/27 16:48:24 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}

// #include <stdio.h>

// int main(void)
// {
//     char str1[] = "Not quite my tempo";
//     char str2[20];

//     str2[0] = '\0'; // Initialize str2 to an empty string
//     printf("String exemple: %s\n", str1);
//     printf("avant: %s\n", str2);
//     ft_strlcpy(str2, str1, 17);
//     printf("apres: %s\n", str2);

//     return 0;
// }
