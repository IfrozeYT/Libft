/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 17:11:26 by username         #+#    #+#              */
/*   Updated: 2026/10/24 19:15:49 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last_oc = NULL;

	while (*s)
	{
		if (*s == c)
			last_oc = s;
		s++;
	}
	if (c == '\0')
		return ((char *) s);
	return ((char *) last_oc);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	const char	*str = "not quite my tempo";
// 	int			c;
// }
//    TEST
// int main(void)
// {
//     const char *str = "Hello, World!";
//     int ch = 'o';
//     char *result = ft_strrchr(str, ch);

//     if (result)
//         printf("Last occurrence of character '%c' found at position: %ld\n", ch, result - str);
//     else
//         printf("Character '%c' not found in the string.\n", ch);

//     return 0;
// }
