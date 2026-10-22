/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:05:11 by username          #+#    #+#             */
/*   Updated: 2026/10/21 17:11:20 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*a;

	a = b;
	while (len--)
		*a++ = c;
	return (b);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	str[] = "not quite my tempo";

// 	printf("avant: %s\n", str);
// 	ft_memset(str + 10, '*', 8);
// 	printf("apres: %s\n", str);
// 	return (0);
// }
