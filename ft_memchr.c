/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:17 by username          #+#    #+#             */
/*   Updated: 2026/10/27 16:48:45 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	b;
	size_t			i;

	a = (unsigned char *) s;
	b = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (a[i] == b)
			return ((void *) & a[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     const char *str = "Hello, World!";
//     int c = 'o';
//     size_t n = 12;

//     char *result = (char *)memchr(str, c, n);
//     if (result != NULL)
//         printf("Character '%c' found at position: %ld\n", c, result - str);
//     else
//         printf("Character '%c' not found in the first %zu bytes.\n", c, n);

//     return 0;
// }
