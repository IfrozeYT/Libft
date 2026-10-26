/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 17:11:21 by username         #+#    #+#              */
/*   Updated: 2026/10/26 18:49:30 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*tmp_s;
	char	to_find;

	tmp_s = (char *) s;
	to_find = (char) c;
	while (*tmp_s)
	{
		if (*tmp_s == to_find)
			return (tmp_s);
		tmp_s++;
	}
	if (to_find == '\0' && *tmp_s == to_find)
		return (tmp_s);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <ctype.h>
// int main(void)
// {
//     const char *str = "Hello, World!";
//     int ch = 'W';
//     char *result = ft_strchr(str, ch);
//     if (result)
//         printf("Character '%c' found at position: %ld\n", ch, result - str);
//     else
//         printf("Character '%c' not found in the string.\n", ch);
//     return 0;
// }
