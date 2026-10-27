/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:23 by username          #+#    #+#             */
/*   Updated: 2026/10/27 16:48:22 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	total;

	total = 0;
	while (s[total] != '\0')
	{
		total++;
	}
	return (total);
}

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "not quite my tempo";

// 	printf("%s\n", str);
// 	printf("ft_strlen = %zu\n", ft_strlen(str));
// 	printf("le vrai strlen d'origine = %zu\n", strlen(str));
// 	return (0);
// }
