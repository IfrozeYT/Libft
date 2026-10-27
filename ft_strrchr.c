/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:26 by username          #+#    #+#             */
/*   Updated: 2026/10/27 16:48:16 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp_s;
	char	*last_oc;
	char	to_find;

	tmp_s = (char *) s;
	to_find = (char) c;
	last_oc = 0;
	while (*tmp_s != '\0')
	{
		if (*tmp_s == to_find)
			last_oc = tmp_s;
		tmp_s++;
	}
	if (to_find == '\0' && *tmp_s == to_find)
		return (tmp_s);
	return (last_oc);
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
