/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:21 by username          #+#    #+#             */
/*   Updated: 2026/10/27 16:48:38 by doallard         ###   ########.fr       */
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
