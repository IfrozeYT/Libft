/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:27 by username          #+#    #+#             */
/*   Updated: 2026/10/27 16:48:13 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int main (void)
// {
//     char c = 'A';
//     char lower = ft_tolower(c);
//     printf("letter: %c\n\nReal lowercase: %c\nMy lowercase: %c\n", c, tolower(c), lower);
//     return 0;
// }
