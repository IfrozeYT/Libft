/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 17:11:18 by username         #+#    #+#              */
/*   Updated: 2026/10/24 19:13:48 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;
	unsigned int	i;

	tmp_s1 = (unsigned char *) s1;
	tmp_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (tmp_s1[i] != tmp_s2[i])
			return (tmp_s1[i] - tmp_s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     const char *str1 = "Hello, World!";
//     const char *str2 = "Hello, Universe!";
//     size_t n = 12;

//     int result = ft_memcmp(str1, str2, n);
//     if (result == 0)
//         printf("The first %zu bytes are equal.\n", n);
//     else if (result < 0)
//         printf("The first %zu bytes of str1 are less than str2.\n", n);
//     else
//         printf("The first %zu bytes of str1 are greater than str2.\n", n);

//     return 0;
// }
