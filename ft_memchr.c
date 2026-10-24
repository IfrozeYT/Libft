/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 17:11:17 by username         #+#    #+#              */
/*   Updated: 2026/10/24 19:13:46 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	b;
	size_t			i;

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
