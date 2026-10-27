/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doallard <doallard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:11:17 by username          #+#    #+#             */
/*   Updated: 2026/10/27 16:48:46 by doallard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
// #include <stdio.h>

// int main(void)
// {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);

//     if (isprint(c))
//     {
//         printf("The character '%c' is a printable character.\n", c);
//     }
//     else
//     {
//         printf("The character '%c' is not a printable character.\n", c);
//     }

//     return 0;
// }
